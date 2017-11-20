---
title: 'Campi di record: Utilizzo delle funzioni RFX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ODBC [C++], data types
- data types [C++], ODBC record field exchange
- RFX (ODBC) [C++], function syntax and parameters
- DoFieldExchange method, and RFX functions
- ODBC [C++], RFX
- RFX (ODBC) [C++], data types
- function calls, RFX functions
ms.assetid: c594300b-5a29-4119-a68b-e7ca32def696
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6c330ee2f9d3952068e2a400cd8f6e23103dc20e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="record-field-exchange-using-the-rfx-functions"></a>Trasferimento di campi di record: utilizzo delle funzioni RFX
In questo argomento viene illustrato come utilizzare le chiamate alle funzioni RFX che costituiscono il corpo del `DoFieldExchange` eseguire l'override.  
  
> [!NOTE]
>  Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in quale riga bulk recupero non è stato implementato. Se si utilizza il recupero di massa di righe, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record di massa (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Le funzioni globali RFX scambiano dati tra le colonne i membri dati dati di origine e il campo nel recordset. È necessario scrivere la funzione RFX del recordset [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) funzione membro. In questo argomento descrive brevemente le funzioni e vengono illustrati i tipi di dati per cui RFX funzioni sono disponibili. [Nota tecnica 43](../../mfc/tn043-rfx-routines.md) viene descritto come scrivere delle funzioni RFX per altri tipi di dati.  
  
##  <a name="_core_rfx_function_syntax"></a>Sintassi delle funzioni RFX  
 Ogni funzione RFX accetta tre parametri (e alcuni accettano un parametro facoltativo quarto e quinto):  
  
-   Un puntatore a un [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) oggetto. Sufficiente passare lungo il `pFX` puntatore passato a `DoFieldExchange`.  
  
-   Il nome di colonna come viene visualizzato nell'origine dati.  
  
-   Il nome del membro dati di campo corrispondente o il membro dati di parametro nella classe recordset.  
  
-   (Facoltativo) In alcune delle funzioni, la lunghezza massima della stringa o della matrice da trasferire. L'impostazione predefinita è 255 byte, ma è possibile modificarlo. La dimensione massima è basata sulla dimensione massima di un `CString` oggetto: **INT_MAX** (2.147.483.647) byte, ma si verificherà probabilmente i limiti del driver prima che le dimensioni.  
  
-   (Facoltativo) Nel `RFX_Text` funzione, è talvolta utilizzare un quinto parametro per specificare il tipo di dati di una colonna.  
  
 Per ulteriori informazioni, vedere le funzioni RFX in [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *riferimenti alla libreria di classe*. Per un esempio di quando è possibile apportare speciale utilizzo dei parametri, vedere [Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md).  
  
##  <a name="_core_rfx_data_types"></a>Tipi di dati RFX  
 La libreria di classi fornisce funzioni RFX per il trasferimento di molti tipi diversi di dati tra l'origine dati e i recordset. Nell'elenco seguente vengono riepilogate le funzioni RFX dal tipo di dati. Nei casi in cui è necessario scrivere la propria chiamate alle funzioni RFX, selezionare da queste funzioni in base al tipo di dati.  
  
|Funzione|Tipo di dati|  
|--------------|---------------|  
|`RFX_Bool`|**BOOL**|  
|`RFX_Byte`|**BYTE**|  
|`RFX_Binary`|`CByteArray`|  
|`RFX_Double`|**double**|  
|`RFX_Single`|**float**|  
|`RFX_Int`|`int`|  
|`RFX_Long`|**long**|  
|`RFX_LongBinary`|`CLongBinary`|  
|`RFX_Text`|`CString`|  
|`RFX_Date`|`CTime`|  
  

 Per ulteriori informazioni, vedere la documentazione sulle funzioni RFX in [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *riferimenti alla libreria di classe*. Per informazioni sulla modalità di mapping dei tipi di dati C++ per tipi di dati SQL, vedere la tabella ANSI SQL dati tipi mappati a tipi di dati C++ in [SQL: tipi di dati C++ (ODBC) e SQL](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)   
 [Scambio di campi di record: Funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)   
 [Recordset: Applicazione di parametri a un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)   
 [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)   
 [Classe CRecordset](../../mfc/reference/crecordset-class.md)   
 [Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)