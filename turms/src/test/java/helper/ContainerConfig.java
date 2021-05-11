/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package helper;

import im.turms.server.common.property.TurmsPropertiesManager;
import im.turms.server.common.testing.BaseIntegrationTest;

/**
 * @author James Chen
 */
public class ContainerConfig {

    ContainerConfig(TurmsPropertiesManager propertiesManager) {
        String uri = BaseIntegrationTest.ENV.getMongoUri("turms-test");

        propertiesManager.getLocalProperties().getCluster().getSharedConfig().getMongo().setUri(uri);

        propertiesManager.getLocalProperties().getService().getMongo().getAdmin().setUri(uri);
        propertiesManager.getLocalProperties().getService().getMongo().getUser().setUri(uri);
        propertiesManager.getLocalProperties().getService().getMongo().getGroup().setUri(uri);
        propertiesManager.getLocalProperties().getService().getMongo().getConversation().setUri(uri);
        propertiesManager.getLocalProperties().getService().getMongo().getMessage().setUri(uri);
    }
}