---
title: "Routine di convalida dei dati della finestra di dialogo standard | Microsoft Docs"
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
  - "finestra di dialogo standard, routine di convalida dati"
ms.assetid: 44dbc222-a897-4949-925e-7660e8964ccd
caps.latest.revision: 13
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Routine di convalida dei dati della finestra di dialogo standard
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono elencate le routine standard di \(DDV\) di convalida dati della finestra di dialogo utilizzate per i controlli comuni della finestra di dialogo MFC.  
  
> [!NOTE]
>  Le routine di scambio di dati della finestra di dialogo standard sono definite nel file di intestazione. afxdd\_.h.  Tuttavia, le applicazioni devono includere afxwin.h.  
  
### Funzioni di DDV  
  
|||  
|-|-|  
|[DDV\_MaxChars](../Topic/DDV_MaxChars.md)|Verifica il numero di caratteri in un determinato valore del controllo non supera un limite massimo specificato.|  
|[DDV\_MinMaxByte](../Topic/DDV_MinMaxByte.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **BYTE**.|  
|[DDV\_MinMaxDateTime](../Topic/DDV_MinMaxDateTime.md)|Verifica un determinato valore del controllo non supera un intervallo di tempo specificato.|  
|[DDV\_MinMaxDouble](../Topic/DDV_MinMaxDouble.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **Double**.|  
|[DDV\_MinMaxDWord](../Topic/DDV_MinMaxDWord.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **DWORD**.|  
|[DDV\_MinMaxFloat](../Topic/DDV_MinMaxFloat.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **mobile**.|  
|[DDV\_MinMaxInt](../Topic/DDV_MinMaxInt.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **int**.|  
|[DDV\_MinMaxLong](../Topic/DDV_MinMaxLong.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **long**.|  
|[DDV\_MinMaxLongLong](../Topic/DDV_MinMaxLongLong.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **LONGLONG**.|  
|[DDV\_MinMaxMonth](../Topic/DDV_MinMaxMonth.md)|Verifica un determinato valore del controllo non supera un intervallo di date specificato.|  
|[DDV\_MinMaxShort](../Topic/DDV_MinMaxShort.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **short**.|  
|[DDV\_MinMaxSlider](../Topic/DDV_MinMaxSlider.md)|Verificare le cadute si specifica di un valore del dispositivo di scorrimento l'intervallo specificato.|  
|[DDV\_MinMaxUInt](../Topic/DDV_MinMaxUInt.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **UINT**.|  
|[DDV\_MinMaxULongLong](../Topic/DDV_MinMaxULongLong.md)|Verifica un determinato valore del controllo non supera un determinato intervallo di **ULONGLONG**.|  
  
## Vedere anche  
 [Routine standard per lo scambio di dati della finestra di dialogo](../../mfc/reference/standard-dialog-data-exchange-routines.md)   
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)