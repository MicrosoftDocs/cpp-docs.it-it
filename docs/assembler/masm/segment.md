---
title: "SEGMENT | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SEGMENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SEGMENT directive"
ms.assetid: e6f68367-6714-4f06-a79c-edfa88014430
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# SEGMENT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

definisce un segmento di un programma chiamato *nome* disporre di attributi di segmento  
  
## Sintassi  
  
```  
  
   name SEGMENT [[READONLY]] [[align]] [[combine]] [[use]] [[characteristics]] ALIAS(string) [['class']]  
statements  
name ENDS  
```  
  
#### Parametri  
 *allineare*  
 L'intervallo di indirizzi di memoria da cui un indirizzo iniziale del segmento può essere selezionato.  Il tipo di allineamento può essere uno dei modi seguenti:  
  
|allineare il tipo|indirizzo iniziale|  
|-----------------------|------------------------|  
|**BYTE**|Indirizzo di byte successivo disponibile.|  
|**WORD**|Indirizzo di parola disponibile successivo \(2 byte per parola\).|  
|**DWORD**|Indirizzo del doppio parola disponibile successivo \(4 byte per doppie parola\).|  
|**PARA**|Indirizzo disponibile successivo di paragrafo \(16 byte per paragrafo\).|  
|**PGSU**|Indirizzo della pagina disponibile successivo \(256 byte per pagina\).|  
|**ALLINEAR**\(n\)|Successivo disponibile *n*indirizzo di byte Th.  Vedere la sezione relativa alle osservazioni per ulteriori informazioni.|  
  
 Se questo parametro non viene specificato, **PARA** viene utilizzata per impostazione predefinita.  
  
 *associazione*  
 **PUBBLICO**,  **STACK**,  **TERRENO COMUNALE**,  **MEMORIA**,  **TO**indirizzo,  **PRIVATE**  
  
 *utilizzo*  
 **USE16**,  **USE32**,  **PIANO**  
  
 `characteristics`  
 **INFORMAZIONI**,  **COLTO**,  **SCRIVERE**,  **ESEGUIRE**,  **CONDIVISO**,  **NOPAGE**,  **NOCACHE**e  **SCARTO**  
  
 Questi sono supportati per il COFF solo e corrispondono alle caratteristiche della sezione COFF con nome, ad esempio **CONDIVISO** corrisponde a IMAGE\_SCN\_MEM\_SHARED\).  LEGGERE imposta il flag di IMAGE\_SCN\_MEM\_READ.  Il flag e READONLY precedente ha generato la sezione a rimuovere il contrassegno di IMG\_SCN\_MEM\_WRITE.  Se nessuno `characteristics` vengono impostati, le funzionalità predefinite non vengono utilizzati e solo i flag programmatore\-specificati attive.  
  
 `ALIAS(` `string` `)`  
 Questa stringa viene utilizzata come nome della sezione nell'oggetto generato COFF.  Crea le sezioni precedenti con lo stesso nome esterno, con i nomi del segmento distinti di MASM.  
  
 non supportato con **\/omf**.  
  
 `class`  
 Definisce il modo in cui i segmenti devono essere combinati e ordinati nel file assemblato.  I tipici valori sono, `'DATA'`,  `'CODE'`,  `'CONST'` e  `'STACK'`  
  
## Note  
 per `ALIGN(``n``)`,  `n` può essere qualsiasi potenza di 2 1 \- 8192; non supportato con  **\/omf**.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)