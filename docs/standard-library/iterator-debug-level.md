---
title: "_ITERATOR_DEBUG_LEVEL | Microsoft Docs"
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
  - "_ITERATOR_DEBUG_LEVEL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ITERATOR_DEBUG_LEVEL"
ms.assetid: 718549cd-a9a9-4ab3-867b-aac00b321e67
caps.latest.revision: 6
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ITERATOR_DEBUG_LEVEL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La macro di `_ITERATOR_DEBUG_LEVEL` \(IDL\) sostituisce e combina la funzionalità delle macro di [\_SECURE\_SCL](../standard-library/secure-scl.md) \(SCL\) e di [\_HAS\_ITERATOR\_DEBUGGING](../standard-library/has-iterator-debugging.md) \(NASCOSTO\).  
  
## Macro valori  
 Nella tabella seguente vengono riepilogati i valori per le macro di `_HAS_ITERATOR_DEBUGGING` e di `_SECURE_SCL` e infine come tali valori vengono sostituiti dalla macro di `_ITERATOR_DEBUG_LEVEL`.  
  
 Nella sezione seguente vengono descritti i valori possibili di SCL e macro NASCOSTE.  
  
 SCL\=0  
 Disables ha archiviato gli iteratori.  
  
 SCL\=1  
 Abilita ha archiviato gli iteratori.  
  
 HID\=0  
 Disabilita debugging degli iteratori nelle build di debug.  
  
 HID\=1  
 Eseguire il debug di iteratore nelle build di debug.  HID non possono essere abilitati nelle build di rilascio.  
  
 Nella tabella seguente viene descritto come i valori macro IDL sostituiscono lo SCL e i valori NASCOSTI macro.  
  
|Modalità di compilazione|Nuova macro|Macro obsolete|Descrizione|  
|------------------------------|-----------------|--------------------|-----------------|  
|**Debug**||||  
||IDL\=0|SCL\=0, HID\=0|Disables ha archiviato gli iteratori e disabilita debugging degli iteratori.|  
||IDL\=1|SCL\=1, HID\=0|Abilita ha archiviato gli iteratori e disabilita debugging degli iteratori.|  
||IDL\=2 \(impostazione predefinita\)|SCL\= \(non è applicato, HID\=1|Per impostazione predefinita, eseguire il debug di iteratore; gli iteratori verificati non sono attinenti.|  
|**Release**||||  
||IDL\=0 \(impostazione predefinita\)|SCL\=0|Per impostazione predefinita, disabilita gli iteratori verificati.|  
||IDL\=1|SCL\=1|Abilita ha archiviato gli iteratori; il debug degli iteratori non è rilevante.|  
  
## Note  
 In modalità di rilascio, verrà generato un errore se si specifica IDL\=2.  
  
 Poiché le macro di `_HAS_ITERATOR_DEBUGGING` e di `_SECURE_SCL` supportano funzionalità simili, gli utenti sono spesso incerti che macro e macro valore da utilizzare in una situazione specifica.  Per risolvere questo problema, è consigliabile utilizzare solo la macro di `_ITERATOR_DEBUG_LEVEL`.  
  
## Vedere anche  
 [Librerie protette: libreria standard C\+\+](../standard-library/safe-libraries-cpp-standard-library.md)