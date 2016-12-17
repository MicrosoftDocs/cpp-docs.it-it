---
title: "Direttive pragma e parola chiave __Pragma | Microsoft Docs"
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
  - "#pragma"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#pragma (direttive), C/C++"
  - "__pragma (parola chiave)"
  - "pragma (direttive) (#pragma)"
  - "pragma (direttive), C/C++"
  - "pragma"
  - "pragma, C/C++"
  - "preprocessore"
  - "preprocessore, pragma"
ms.assetid: 9867b438-ac64-4e10-973f-c3955209873f
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttive pragma e parola chiave __Pragma
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le direttive pragma specificano funzionalità del compilatore specifiche del computer o del sistema operativo.  La parola chiave `__pragma`, che è specifica del compilatore Microsoft, consente di codificare direttive pragma all'interno delle definizioni di macro.  
  
## Sintassi  
  
```  
  
      #pragma token-string  
__pragma(token-string)  
```  
  
## Note  
 Ogni implementazione di C e C\+\+ supporta alcune funzionalità esclusive del computer host o del sistema operativo di utilizzo.  Alcuni programmi, ad esempio, devono esercitare un controllo preciso sulle aree di memoria in cui i dati vengono immessi o controllare il modo in cui alcune funzioni ricevono i parametri.  Le direttive `#pragma` offrono un metodo con cui ogni compilatore può fornire le funzionalità specifiche del sistema operativo e del computer mantenendo la compatibilità generale con i linguaggi C e C\+\+.  
  
 I pragma sono per definizione specifici del computer o del sistema operativo e, in genere, sono diversi per ogni compilatore.  I pragma possono essere utilizzati nelle istruzioni condizionali, per fornire nuove funzionalità del preprocessore o per fornire al compilatore informazioni definite dall'implementazione.  
  
 La stringa `token-string` è una serie di caratteri che fornisce a un compilatore specifico eventuali istruzioni e argomenti.  Il simbolo di cancelletto \(**\#**\) deve essere il primo carattere diverso da uno spazio vuoto sulla riga che contiene il pragma; i caratteri di spazio vuoto possono separare il simbolo di cancelletto dalla parola "pragma".  Qualsiasi testo che il convertitore può analizzare come token di pre\-elaborazione, deve essere scritto dopo `#pragma`.  L'argomento di `#pragma` è soggetto all'espansione di macro.  
  
 Se il compilatore rileva un pragma che non riconosce, genera un messaggio di avviso e continua la compilazione.  
  
 I compilatori Microsoft C e C\+\+ riconoscono i seguenti pragma:  
  
||||  
|-|-|-|  
|[alloc\_text](../preprocessor/alloc-text.md)|[auto\_inline](../preprocessor/auto-inline.md)|[bss\_seg](../preprocessor/bss-seg.md)|  
|[check\_stack](../preprocessor/check-stack.md)|[code\_seg](../preprocessor/code-seg.md)|[comment](../preprocessor/comment-c-cpp.md)|  
|[component](../preprocessor/component.md)|[conform](../preprocessor/conform.md) <sup>1</sup>|[const\_seg](../preprocessor/const-seg.md)|  
|[data\_seg](../preprocessor/data-seg.md)|[deprecated](../preprocessor/deprecated-c-cpp.md)|[detect\_mismatch](../preprocessor/detect-mismatch.md)|  
|[fenv\_access](../preprocessor/fenv-access.md)|[float\_control](../preprocessor/float-control.md)|[fp\_contract](../preprocessor/fp-contract.md)|  
|[function](../preprocessor/function-c-cpp.md)|[hdrstop](../preprocessor/hdrstop.md)|[include\_alias](../preprocessor/include-alias.md)|  
|[init\_seg](../preprocessor/init-seg.md) <sup>1</sup>|[inline\_depth](../preprocessor/inline-depth.md)|[inline\_recursion](../preprocessor/inline-recursion.md)|  
|[intrinsic](../preprocessor/intrinsic.md)|[loop](../preprocessor/loop.md) <sup>1</sup>|[make\_public](../preprocessor/make-public.md)|  
|[managed](../preprocessor/managed-unmanaged.md)|[message](../preprocessor/message.md)||  
|[omp](../preprocessor/omp.md)|[once](../preprocessor/once.md)||  
|[optimize](../preprocessor/optimize.md)|[pack](../preprocessor/pack.md)|[pointers\_to\_members](../preprocessor/pointers-to-members.md) <sup>1</sup>|  
|[pop\_macro](../preprocessor/pop-macro.md)|[push\_macro](../preprocessor/push-macro.md)|[region, endregion](../preprocessor/region-endregion.md)|  
|[runtime\_checks](../preprocessor/runtime-checks.md)|[section](../preprocessor/section.md)|[setlocale](../preprocessor/setlocale.md)|  
|[strict\_gs\_check](../preprocessor/strict-gs-check.md)|[unmanaged](../preprocessor/managed-unmanaged.md)|[vtordisp](../preprocessor/vtordisp.md) <sup>1</sup>|  
|[warning](../preprocessor/warning.md)|||  
  
 1.  Supportato solo dal compilatore C\+\+.  
  
## Opzioni relative a compilatore e pragma  
 Alcuni pragma offrono la stessa funzionalità delle opzioni del compilatore.  Quando viene rilevato un pragma nel codice sorgente, viene eseguito l'override del comportamento specificato dall'opzione del compilatore.  Ad esempio, se è stato specificato [\/Zp8](../build/reference/zp-struct-member-alignment.md), è possibile eseguire l'override di tale impostazione del compilatore per alcune sezioni specifiche del codice con [pack](../preprocessor/pack.md):  
  
```  
cl /Zp8 ...  
  
<file> - packing is 8  
// ...  
#pragma pack(push, 1) - packing is now 1  
// ...  
#pragma pack(pop) - packing is 8  
</file>  
```  
  
## Parola chiave \_\_pragma\(\)  
 **Specifica di Microsoft**  
  
 Il compilatore supporta inoltre la parola chiave `__pragma`, che ha la stessa funzionalità della direttiva `#pragma`, ma può essere utilizzata inline in una definizione di macro.  La direttiva `#pragma` non può essere utilizzata in una definizione di macro, perché il compilatore interpreta il carattere segno di cancelletto \("\#"\) presente nella direttiva come un [operatore per la creazione di stringhe \(\#\)](../preprocessor/stringizing-operator-hash.md).  
  
 Nell'esempio di codice riportato di seguito viene illustrato come può essere utilizzata la parola chiave `__pragma` in una macro.  Questo codice è stato estratto dall'intestazione mfcdual.h presente nell'esempio ACDUAL in "Esempi di supporto COM per il compilatore":  
  
```  
#define CATCH_ALL_DUAL \  
CATCH(COleException, e) \  
{ \  
_hr = e->m_sc; \  
} \  
AND_CATCH_ALL(e) \  
{ \  
__pragma(warning(push)) \  
__pragma(warning(disable:6246)) /*disable _ctlState prefast warning*/ \  
AFX_MANAGE_STATE(pThis->m_pModuleState); \  
__pragma(warning(pop)) \  
_hr = DualHandleException(_riidSource, e); \  
} \  
END_CATCH_ALL \  
return _hr; \  
```  
  
 **Fine sezione specifica di Microsoft**  
  
## Vedere anche  
 [Riferimenti al preprocessore C\/C\+\+](../preprocessor/c-cpp-preprocessor-reference.md)   
 [Pragma C](../c-language/c-pragmas.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)