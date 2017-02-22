---
title: "Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO [C++], supporto DDX (Dialog Data Exchange)"
  - "database [C++], supporto DDX (Dialog Data Exchange)"
  - "DDX (Dialog Data Exchange) [C++], supporto database"
  - "DDX (Dialog Data Exchange) [C++], funzioni"
  - "funzioni DDX_Field"
  - "ODBC [C++], supporto DDX (Dialog Data Exchange)"
ms.assetid: 0d8cde38-3a2c-4100-9589-ac80a7b1ce91
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono elencate le funzioni DDX\_Field utilizzate per lo scambio di dati tra un [CRecordset](../../mfc/reference/crecordset-class.md) e un modulo [CRecordView](../../mfc/reference/crecordview-class.md) o un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) e un modulo [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md).  
  
> [!NOTE]
>  Le funzioni DDX\_Field sono simili alle funzioni DDX in quanto possono scambiare dati con i controlli in un modulo.  A differenza delle DDX però, possono scambiare dati con i campi dell'oggetto recordset associato della visualizzazione invece che con i campi della visualizzazione del record stesso.  Per ulteriori informazioni, vedere le classi `CRecordView` e `CDaoRecordView`.  
  
### Funzioni DDX\_Field  
  
|||  
|-|-|  
|[DDX\_FieldCBIndex](../Topic/DDX_FieldCBIndex.md)|Trasferisce dati integer tra un membro dati di un campo del recordset e l'indice della selezione corrente in una casella combinata in un [CRecordView](../../mfc/reference/crecordview-class.md) o in un [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md).|  
|[DDX\_FieldCBString](../Topic/DDX_FieldCBString.md)|Trasferisce dati `CString` tra un membro dati di un campo del recordset e il controllo di modifica di una casella combinata in `CRecordView` o in un `CDaoRecordView`.  Quando si spostano i dati dal recordset al controllo, questa funzione seleziona l'elemento nella casella combinata che inizia con i caratteri della stringa specificata.|  
|[DDX\_FieldCBStringExact](../Topic/DDX_FieldCBStringExact.md)|Trasferisce dati `CString` tra un membro dati di un campo del recordset e il controllo di modifica di una casella combinata in `CRecordView` o in un `CDaoRecordView`.  Quando si spostano i dati dal recordset al controllo, questa funzione seleziona l'elemento nella casella combinata che corrisponde esattamente alla stringa specificata.|  
|[DDX\_FieldCheck](../Topic/DDX_FieldCheck.md)|Trasferisce dati boolean tra un membro dati di un campo del recordset e una casella di controllo in un `CRecordView` o in un `CDaoRecordView`.|  
|[DDX\_FieldLBIndex](../Topic/DDX_FieldLBIndex.md)|Trasferisce dati integer tra un membro dati di un campo del recordset e l'indice della selezione corrente in una casella di riepilogo in un `CRecordView` o in un `CDaoRecordView`.|  
|[DDX\_FieldLBString](../Topic/DDX_FieldLBString.md)|Gestisce il trasferimento di dati [CString](../../atl-mfc-shared/reference/cstringt-class.md) tra un controllo casella di riepilogo e i membri dati del campo di un recordset.  Quando si spostano i dati dal recordset al controllo, questa funzione seleziona l'elemento nella casella di riepilogo che inizia con i caratteri della stringa specificata.|  
|[DDX\_FieldLBStringExact](../Topic/DDX_FieldLBStringExact.md)|Gestisce il trasferimento di dati `CString` tra un controllo casella di riepilogo e i membri dati del campo di un recordset.  Quando si spostano i dati dal recordset al controllo, questa funzione seleziona il primo elemento che corrisponde esattamente alla stringa specificata.|  
|[DDX\_FieldRadio](../Topic/DDX_FieldRadio.md)|Trasferisce dati integer tra un membro dati di un campo del recordset e un gruppo di pulsanti di opzione in un `CRecordView` o in un `CDaoRecordView`.|  
|[DDX\_FieldScroll](../Topic/DDX_FieldScroll.md)|Imposta o ottiene la posizione di scorrimento di un controllo della barra di scorrimento in un `CRecordView` o in un `CDaoRecordView`.  Chiamarla dalla funzione [DoFieldExchange](../Topic/CDaoRecordset::DoFieldExchange.md).|  
|[DDX\_FieldText](../Topic/DDX_FieldText.md)|Sono disponibili versione di overload per il trasferimento di dati `int`, **UINT**, **long**, `DWORD`, [CString](../../atl-mfc-shared/reference/cstringt-class.md), **mobile**, **Double**, **short**, [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency](../../mfc/reference/colecurrency-class.md) tra un membro dati di un campo del recordset e una casella di modifica in un `CRecordView` o in un `CDaoRecordView`.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)