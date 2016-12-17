---
title: "COleVariant Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleVariant"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "automazione, tipi di parametro"
  - "COleVariant class"
  - "VARIANT data type"
ms.assetid: e1b5cd4a-b066-4b9b-b48b-6215ed52d998
caps.latest.revision: 24
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleVariant Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula il tipo di dati [VARIANT](http://msdn.microsoft.com/it-it/e305240e-9e11-4006-98cc-26f4932d2118).  
  
## Sintassi  
  
```  
class COleVariant : public tagVARIANT  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleVariant::COleVariant](../Topic/COleVariant::COleVariant.md)|Costruisce un oggetto `COleVariant`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleVariant::Attach](../Topic/COleVariant::Attach.md)|Associa **VARIANT** a `COleVariant`.|  
|[COleVariant::ChangeType](../Topic/COleVariant::ChangeType.md)|Modifica il tipo di variant di questo oggetto `COleVariant`.|  
|[COleVariant::Clear](../Topic/COleVariant::Clear.md)|Cancella questo oggetto `COleVariant`.|  
|[COleVariant::Detach](../Topic/COleVariant::Detach.md)|Rimuove **VARIANT** da `COleVariant` e restituisce **VARIANT**.|  
|[COleVariant::GetByteArrayFromVariantArray](../Topic/COleVariant::GetByteArrayFromVariantArray.md)|Recupera una matrice di byte di una matrice variabile esistente.|  
|[COleVariant::SetString](../Topic/COleVariant::SetString.md)|Imposta la stringa a un particolare tipo, in genere ANSI.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleVariant::operator LPCVARIANT](../Topic/COleVariant::operator%20LPCVARIANT.md)|Converte un valore `COleVariant` in `LPCVARIANT`.|  
|[COleVariant::operator LPVARIANT](../Topic/COleVariant::operator%20LPVARIANT.md)|Converte un oggetto `COleVariant` in `LPVARIANT`.|  
|[COleVariant::operator \=](../Topic/COleVariant::operator%20=.md)|Copia un valore `COleVariant`.|  
|[COleVariant::operator \=\=](../Topic/COleVariant::operator%20==.md)|Confronta due valori `COleVariant`.|  
|[COleVariant::operator \<\<, \>\>](../Topic/COleVariant::operator%20%3C%3C,%20%3E%3E.md)|Restituisce un valore `COleVariant` a `CArchive` o a `CDumpContext` e introduce un oggetto `COleVariant` da `CArchive`.|  
  
## Note  
 Questo tipo di dati viene utilizzato in automazione OLE.  In particolare, la struttura [DISPPARAMS](http://msdn.microsoft.com/it-it/a16e5a21-766e-4287-b039-13429aa78f8b) contiene un puntatore a una matrice di strutture **VARIANT**.  Una struttura **DISPPARAMS** viene utilizzata per passare i parametri a [IDispatch::Invoke](http://msdn.microsoft.com/it-it/964ade8e-9d8a-4d32-bd47-aa678912a54d).  
  
> [!NOTE]
>  Questa classe è derivata dalla struttura **VARIANT**.  Ciò significa che è possibile passare `COleVariant` in un parametro che richiede **VARIANT** e che i membri dati della struttura **VARIANT** sono accessibili membri dati `COleVariant`.  
  
 Le due classi correlate [COleCurrency](../../mfc/reference/colecurrency-class.md) e [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) di MFC includono i tipi di dati variabili **CURRENCY** \(`VT_CY`\) e **DATE** \(`VT_DATE`\).  La classe `COleVariant` viene utilizzato spesso nelle classi DAO, vedere queste classi per l'utilizzo tipico di questa classe, ad esempio [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
 Per ulteriori informazioni, vedere [VARIANT](http://msdn.microsoft.com/it-it/e305240e-9e11-4006-98cc-26f4932d2118), [VALUTA](http://msdn.microsoft.com/it-it/5e81273c-7289-45c7-93c0-32c1553f708e), [DISPPARAMS](http://msdn.microsoft.com/it-it/a16e5a21-766e-4287-b039-13429aa78f8b)e le voci [IDispatch::Invoke](http://msdn.microsoft.com/it-it/964ade8e-9d8a-4d32-bd47-aa678912a54d) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulla classe `COleVariant` e sul relativo utilizzo in automazione OLE, vedere "passare i parametri di automazione OLE" nell'articolo [automazione](../../mfc/automation.md).  
  
## Gerarchia di ereditarietà  
 `tagVARIANT`  
  
 `COleVariant`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)