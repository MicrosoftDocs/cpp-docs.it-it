---
title: "Trasferimento di campi di record: utilizzo delle funzioni RFX | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di dati [C++], trasferimento di campi di record ODBC"
  - "DoFieldExchange (metodo), e funzioni RFX"
  - "chiamate di funzione, funzioni RFX"
  - "ODBC [C++], tipi di dati"
  - "ODBC [C++], RFX"
  - "RFX (ODBC) [C++], tipi di dati"
  - "RFX (ODBC) [C++], sintassi e parametri di funzioni"
ms.assetid: c594300b-5a29-4119-a68b-e7ca32def696
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trasferimento di campi di record: utilizzo delle funzioni RFX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene descritto l'utilizzo delle chiamate alle funzioni RFX che costituiscono il corpo dell'override di `DoFieldExchange`.  
  
> [!NOTE]
>  L'argomento è relativo alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) per cui il recupero di massa di righe non è ancora stato implementato.  Se si sta utilizzando il recupero di massa di righe, verrà implementato l'RFX di massa.  L'RFX di massa è simile all'RFX.  Per comprenderne le differenze, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
 Le funzioni globali di RFX consentono lo scambio di dati tra le colonne dell'origine dati e i membri dati di campo del recordset.  È necessario scrivere le chiamate alle funzioni RFX nella funzione membro [DoFieldExchange](../Topic/CRecordset::DoFieldExchange.md) del recordset.  In questo argomento viene fornita una breve descrizione delle funzioni e vengono illustrati i tipi di dati per i quali sono disponibili le funzioni RFX.  Nella [Nota tecnica 43](../../mfc/tn043-rfx-routines.md) viene descritta la scrittura delle funzioni RFX per altri tipi di dati.  
  
##  <a name="_core_rfx_function_syntax"></a> Sintassi delle funzioni RFX  
 Ciascuna funzione RFX utilizza tre parametri, elencati di seguito. Solo alcune utilizzano un quarto o un quinto parametro facoltativo.  
  
-   Un puntatore a un oggetto [CFieldExchange](../../mfc/reference/cfieldexchange-class.md).  È sufficiente utilizzare il puntatore `pFX` passato a `DoFieldExchange`.  
  
-   Il nome della colonna presente nell'origine dati.  
  
-   Il nome del membro dati di campo o del membro dati di parametro corrispondente nella classe recordset.  
  
-   \(Facoltativo\) In alcune funzioni, la lunghezza massima della stringa o della matrice da trasferire.  L'impostazione predefinita è di 255 byte, ma è possibile modificarla.  La dimensione massima si basa sulle dimensioni massime di un oggetto `CString`, ovvero **INT\_MAX** \(2.147.483.647\) byte, ma, prima di raggiungere questo valore, è probabile che si incontrino i limiti del driver.  
  
-   \(Facoltativo\) Nella funzione `RFX_Text` talvolta è necessario utilizzare un quinto parametro per specificare il tipo di dati di una colonna.  
  
 Per ulteriori informazioni, vedere gli argomenti relativi alle funzioni RFX in [Macro e funzioni globali](../Topic/Macros,%20Global%20Functions,%20and%20Global%20Variables.md) in *Riferimenti alla libreria di classi*.  Per un esempio di utilizzo speciale dei parametri, vedere [Recordset: recupero di somme e altri risultati aggregati \(ODBC\)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md).  
  
##  <a name="_core_rfx_data_types"></a> Tipi di dati RFX  
 La libreria di classi rende disponibili le funzioni RFX per lo scambio di molti tipi diversi di dati tra l'origine dati e i recordset.  Nell'elenco riportato di seguito vengono riepilogate le funzioni RFX in base al tipo di dati.  Nei casi in cui sia necessario scrivere le chiamate alle funzioni RFX, scegliere una delle funzioni riportate di seguito in base al tipo di dati.  
  
|Funzione|Tipo di dati|  
|--------------|------------------|  
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
  
 Per ulteriori informazioni, vedere la documentazione sulle funzioni RFX in [Macro e funzioni globali](../Topic/Macros,%20Global%20Functions,%20and%20Global%20Variables.md) in *Riferimenti alla libreria di classi*.  Per informazioni sulle corrispondenze tra tipi di dati C\+\+ e SQL, vedere la tabella Tipi di dati SQL ANSI e corrispondenti tipi di dati C\+\+ in [SQL: tipi di dati SQL e C\+\+ \(ODBC\)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).  
  
## Vedere anche  
 [Trasferimento di campi di record \(RFX\)](../../data/odbc/record-field-exchange-rfx.md)   
 [Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)   
 [Recordset: applicazione di parametri a un recordset \(ODBC\)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)   
 [Recordset: associazione dinamica di colonne di dati \(ODBC\)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)