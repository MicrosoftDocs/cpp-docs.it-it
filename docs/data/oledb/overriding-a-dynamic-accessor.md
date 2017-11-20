---
title: Si esegue l'override di una funzione di accesso dinamico | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- accessors [C++], dynamic
- dynamic accessors
- overriding, dynamic accessors
ms.assetid: cbefd156-6da5-490d-b795-c2d7d874f7ce
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4dcec1f501d2f05018410fcd293a4ed649e607b1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="overriding-a-dynamic-accessor"></a>Override di una funzione di accesso dinamica
Quando si utilizza una funzione di accesso dinamico, ad esempio `CDynamicAccessor`, il comando **aprire** metodo crea una funzione di accesso per automaticamente, in base alle informazioni di colonna del set di righe aperto. È possibile sostituire la funzione di accesso dinamico per controllare esattamente come le colonne sono associate.  
  
 Per eseguire l'override di funzioni di accesso dinamiche, passare **false** come ultimo parametro per il `CCommand::Open` metodo. In questo modo **aprire** dalla creazione automatica di una funzione di accesso. È quindi possibile chiamare `GetColumnInfo` e chiamare `AddBindEntry` per ogni colonna che si desidera associare. Il codice seguente viene illustrato come eseguire questa operazione:  
  
```  
USES_CONVERSION;  
double   dblProductID;  
  
CCommand<CDynamicAccessor> product;  
// Open the table, passing false to prevent automatic binding   
product.Open(session, _T("Select * FROM Products"), NULL, NULL, DBGUID_DEFAULT, false);  
  
ULONG         nColumns;  
DBCOLUMNINFO*   pColumnInfo;  
// Get the column information from the opened rowset.  
product.GetColumnInfo(&nColumns, &pColumnInfo);  
  
// Bind the product ID as a double.  
pColumnInfo[0].wType          = DBTYPE_R8;  
pColumnInfo[0].ulColumnSize = 8;  
product.AddBindEntry(pColumnInfo[0]);  
  
// Bind the product name as it is.  
product.AddBindEntry(pColumnInfo[1]);  
  
// Bind the reorder level as a string.  
pColumnInfo[8].wType          = DBTYPE_STR;  
pColumnInfo[8].ulColumnSize = 10;  
product.AddBindEntry(pColumnInfo[8]);  
  
// You have finished specifying the bindings. Go ahead and bind.  
product.Bind();  
// Free the memory for the column information that was retrieved in   
// previous call to GetColumnInfo.  
CoTaskMemFree(pColumnInfo);  
  
char*   pszProductName;  
char*   pszReorderLevel;  
bool   bRC;  
  
// Loop through the records tracing out the information.  
while (product.MoveNext() == S_OK)  
{  
   bRC = product.GetValue(1, &dblProductID);  
   pszProductName   = (char*)product.GetValue(2);  
   pszReorderLevel  = (char*)product.GetValue(9);  
  
   ATLTRACE(_T("Override = %lf \"%s\" \"%s\"\n"), dblProductID,  
      A2T(pszProductName), A2T(pszReorderLevel));  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)