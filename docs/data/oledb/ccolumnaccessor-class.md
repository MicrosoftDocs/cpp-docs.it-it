---
title: Classe CColumnAccessor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CColumnAccessor
- ATL::CColumnAccessor
- ATL.CColumnAccessor
dev_langs: C++
helpviewer_keywords: CColumnAccessor class
ms.assetid: 6ce1e67f-6a20-490d-9326-c168b43eee7e
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 55c77a53cb6e6c4a103c509aa3d527803d91af3f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccolumnaccessor-class"></a>Classe CColumnAccessor
Genera il codice consumer inserito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CColumnAccessor : public CAccessorBase  
```  
  
## <a name="remarks"></a>Note  
 Nel codice inserito, ogni colonna è associato come una funzione di accesso separato. Tenere presente che questa classe viene utilizzata l'inserimento di codice (ad esempio, che potrebbe verificarsi durante il debug), ma in genere non è necessario utilizzare direttamente il o i relativi metodi.  
  
 `CColumnAccessor`implementa i metodi stub seguenti, ognuna delle quali corrispondono funzionalità agli altri metodi di classe della funzione di accesso:  
  
-   `CColumnAccessor`Il costruttore. Crea e inizializza il `CColumnAccessor` oggetto.  
  
-   `CreateAccessor`Alloca memoria per la colonna strutture di associazione e inizializza i membri dati della colonna.  
  
-   **BindColumns** associa le colonne per le funzioni di accesso.  
  
-   **SetParameterBuffer** alloca i buffer per i parametri.  
  
-   `AddParameter`Aggiunge una voce di parametro per le strutture di voce di parametro.  
  
-   **HasOutputColumns** determina se la funzione di accesso include colonne di output  
  
-   **HasParameters** determina se la funzione di accesso dispone di parametri.  
  
-   `BindParameters`Associa i parametri creati per le colonne.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)