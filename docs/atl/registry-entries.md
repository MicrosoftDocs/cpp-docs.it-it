---
title: Le voci del Registro di sistema (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- registry, ATL services entries
- registry, application IDs
ms.assetid: 881989b7-61bb-459a-a13e-3bfcb33e184e
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: faef0ca0c1c9c4c2986a039b8b1a26517641acd0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="registry-entries"></a>Voci del Registro di sistema
DCOM è stato introdotto il concetto di ID applicazione (AppID), il gruppo di opzioni di configurazione per uno o più oggetti DCOM in una posizione centralizzata nel Registro di sistema. Per specificare un AppID, che indica il valore AppID valore CLSID dell'oggetto denominato.  
  
 Per impostazione predefinita, un servizio generato ATL Usa il CLSID GUID per l'ID applicazione. In `HKEY_CLASSES_ROOT\AppID`, è possibile specificare le voci specifiche di DCOM. Inizialmente, sono presenti due voci:  
  
-   `LocalService`, con un valore uguale al nome del servizio. Se presente, questo valore viene utilizzato anziché il `LocalServer32` chiave sotto il CLSID.  
  
-   `ServiceParameters`, con un valore uguale a `-Service`. Questo valore specifica i parametri che verranno passati al servizio quando viene avviata. Si noti che questi parametri vengono passati al servizio `ServiceMain` non funzione `WinMain`.  
  
 Qualsiasi servizio DCOM deve anche creare un'altra chiave in `HKEY_CLASSES_ROOT\AppID`. Questa chiave è uguale al nome del file EXE e opera come un riferimento incrociato, in quanto contiene un valore AppID che punta all'AppID voci.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)

