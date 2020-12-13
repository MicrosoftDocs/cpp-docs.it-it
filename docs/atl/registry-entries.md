---
description: 'Altre informazioni su: voci del registro di sistema'
title: Voci del registro di sistema (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- registry, ATL services entries
- registry, application IDs
ms.assetid: 881989b7-61bb-459a-a13e-3bfcb33e184e
ms.openlocfilehash: c89c8f64a91c09f16333c3381a33d792332543d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138580"
---
# <a name="registry-entries"></a>Voci del Registro di sistema

In DCOM è stato introdotto il concetto di ID applicazione (AppID), che raggruppa le opzioni di configurazione per uno o più oggetti DCOM in una posizione centralizzata nel registro di sistema. È possibile specificare un AppID indicando il relativo valore nel valore denominato AppID sotto il CLSID dell'oggetto.

Per impostazione predefinita, un servizio generato da ATL USA il relativo CLSID come GUID per il relativo AppID. In `HKEY_CLASSES_ROOT\AppID` è possibile specificare voci specifiche di DCOM. Inizialmente sono presenti due voci:

- `LocalService`, con un valore uguale al nome del servizio. Se questo valore esiste, viene usato al posto della `LocalServer32` chiave sotto il CLSID.

- `ServiceParameters`, con un valore uguale a `-Service` . Questo valore specifica i parametri che verranno passati al servizio quando viene avviato. Si noti che questi parametri vengono passati alla funzione del servizio `ServiceMain` , non a `WinMain` .

Qualsiasi servizio DCOM deve anche creare un'altra chiave in `HKEY_CLASSES_ROOT\AppID` . Questa chiave è uguale al nome del file EXE e funge da riferimento incrociato, perché contiene un valore AppID che punta alle voci AppID.

## <a name="see-also"></a>Vedi anche

[Services](../atl/atl-services.md)
