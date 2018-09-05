---
title: Le voci del Registro di sistema (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- registry, ATL services entries
- registry, application IDs
ms.assetid: 881989b7-61bb-459a-a13e-3bfcb33e184e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d74f458e28377dcc0bd7d6800cddc6e227c9f984
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43751781"
---
# <a name="registry-entries"></a>Voci del Registro di sistema

DCOM ha introdotto il concetto di ID applicazione (AppID), il gruppo di opzioni di configurazione per uno o più oggetti DCOM in una posizione centralizzata nel Registro di sistema. Per specificare un ID App, che indica il relativo valore nell'ID applicazione del valore CLSID dell'oggetto denominato.

Per impostazione predefinita, un servizio generato ATL Usa valore CLSID corrispondente al GUID per l'ID applicazione. In `HKEY_CLASSES_ROOT\AppID`, è possibile specificare le voci specifiche di DCOM. Inizialmente, sono disponibili due voci:

- `LocalService`, con un valore uguale al nome del servizio. Se questo valore esiste, viene utilizzato anziché il `LocalServer32` chiavi sotto il CLSID.

- `ServiceParameters`, con un valore uguale a `-Service`. Questo valore specifica i parametri che verranno passati al servizio quando viene avviato. Si noti che questi parametri vengono passati al servizio `ServiceMain` funziona, non `WinMain`.

Qualsiasi servizio DCOM deve inoltre creare un'altra chiave in `HKEY_CLASSES_ROOT\AppID`. Questa chiave è uguale al nome del file EXE e agisce come un riferimento incrociato, in quanto contiene un valore di ID App che punta alle voci di AppID.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)

