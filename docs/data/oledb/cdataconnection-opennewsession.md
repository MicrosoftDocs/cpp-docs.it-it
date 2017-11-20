---
title: 'CDataConnection:: Opennewsession | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDataConnection.OpenNewSession
- ATL.CDataConnection.OpenNewSession
- ATL::CDataConnection::OpenNewSession
- OpenNewSession
- CDataConnection::OpenNewSession
dev_langs: C++
helpviewer_keywords: OpenNewSession method
ms.assetid: 0a70e573-9498-4ca7-b524-45666dc7b0a3
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 733834dcb7df6addd9b3953019b367f9e12951dc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdataconnectionopennewsession"></a>CDataConnection::OpenNewSession
Apre una nuova sessione utilizzando l'origine dati dell'oggetto connessione corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT OpenNewSession(   
   CSession & session    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `session`  
 [in/out] Un riferimento all'oggetto della nuova sessione.  
  
 **Note**  
 La nuova sessione utilizza l'oggetto di origine dati in essi contenuti dell'oggetto connessione corrente come padre e può accedere a tutte le stesse informazioni dell'origine dati.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataConnection](../../data/oledb/cdataconnection-class.md)