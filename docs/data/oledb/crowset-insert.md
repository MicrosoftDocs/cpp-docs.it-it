---
title: 'CRowset:: Insert | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CRowset<TAccessor>.Insert
- CRowset.Insert
- CRowset<TAccessor>.Insert
- CRowset<TAccessor>::Insert
- ATL::CRowset<TAccessor>::Insert
- ATL.CRowset.Insert
- CRowset::Insert
- ATL::CRowset::Insert
dev_langs: C++
helpviewer_keywords: Insert method
ms.assetid: 6a64a1c3-10ac-4296-8685-0fd6fe63a13b
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a8cdb6c413cc1a655ace270df632ca501b9b5f3d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crowsetinsert"></a>CRowset::Insert
Crea e Inizializza una nuova riga usando i dati dalla funzione di accesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT Insert(   
   int nAccessor = 0,   
   bool bGetHRow = false    
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `nAccessor`  
 [in] Il numero della funzione di accesso da utilizzare per l'inserimento dei dati.  
  
 *bGetHRow*  
 [in] Indica se l'handle per la riga inserita verrà recuperata.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetChange`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetChange** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
 Inserimento potrebbe non riuscire se una o più colonne non è accessibile in scrittura. Modificare la mappa del cursore per risolvere il problema.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come accedere a un'origine dati tramite un set di righe e quindi inserire una stringa utilizzando una tabella in tale set di righe.  
  
 Innanzitutto, creare una classe di tabella tramite l'inserimento di un nuovo oggetto ATL al progetto. Ad esempio, fare clic sul progetto nel riquadro area di lavoro e selezionare **nuovo oggetto ATL**. Dal **accesso ai dati** categoria, seleziona **Consumer**. Creare un oggetto consumer del tipo **tabella**. (Selezione **tabella** crea un set di righe direttamente dalla tabella; selezionare **comando** crea un set di righe tramite un comando SQL.) Selezionare un'origine dati, specificare una tabella a cui accedere a tale origine dati. Se si chiama l'oggetto consumer **CCustomerTable**, sarebbe quindi implementare il codice di inserimento nel modo seguente:  
  
 [!code-cpp[NVC_OLEDB_Consumer#10](../../data/oledb/codesnippet/cpp/crowset-insert_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)