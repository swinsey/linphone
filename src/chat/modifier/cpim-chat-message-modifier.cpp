/*
 * cpim-chat-message-modifier.cpp
 * Copyright (C) 2017  Belledonne Communications SARL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

 #include "chat/chat-message-p.h"
 #include "cpim-chat-message-modifier.h"

 LINPHONE_BEGIN_NAMESPACE
 
 using namespace std;

 void CpimChatMessageModifier::encode(const LinphonePrivate::ChatMessagePrivate* msg) {
    //TODO
    if (msg->internalContent) {
        // Another ChatMessageModifier was called before this one, we apply our changes on the private content
    } else {
        // We're the first ChatMessageModifier to be called, we'll create the private content from the public one
    }
 }

 void CpimChatMessageModifier::decode(const LinphonePrivate::ChatMessagePrivate* msg) {
    //TODO
 }
 
LINPHONE_END_NAMESPACE