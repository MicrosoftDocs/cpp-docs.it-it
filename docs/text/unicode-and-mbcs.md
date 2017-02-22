---
title: "Unicode e MBCS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MBCS [C++], Unicode"
  - "MFC [C++], set di caratteri"
  - "set di caratteri [C++], multibyte"
  - "librerie di runtime [C++], portabilità del linguaggio"
  - "set di caratteri [C++], Unicode"
  - "Unicode [C++], funzioni MFC e di runtime del linguaggio C"
  - "caratteri multibyte [C++]"
  - "runtime [C++], portabilità del linguaggio"
ms.assetid: 677baec6-71b4-4579-94df-64f18bc117c4
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 9
---
# Unicode e MBCS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria MFC, la libreria di runtime del linguaggio C per Visual C\+\+ e l'ambiente di sviluppo di Visual C\+\+ offrono supporto per la programmazione internazionale.  Di seguito sono descritte le caratteristiche disponibili.  
  
-   Supporto per lo standard Unicode in Windows 2000 \(in precedenza Windows NT\).  Unicode è lo standard corrente ed è consigliabile utilizzarlo quando possibile.  
  
     Con il termine Unicode si intende un sistema di codifica dei caratteri a 16 bit in grado di fornire un'adeguata codifica per i caratteri di tutte le lingue.  Tutti i caratteri ASCII sono inclusi nel formato Unicode come caratteri estesi.  
  
    > [!NOTE]
    >  Lo standard Unicode non è supportato in Windows 95, Windows 98 o Windows Millennium Edition.  
  
-   Supporto per una forma di set di caratteri multibyte \(MBCS\) denominata set di caratteri a doppio byte \(DBCS, Double Byte Character Set\) su tutte le piattaforme.  
  
     I caratteri DBCS sono costituiti da uno o due byte.  Alcuni intervalli di byte sono riservati per poter essere utilizzati come byte iniziali.  Il byte iniziale, insieme al byte seguente, definito byte finale, forma un unico carattere dell'ampiezza di due byte.  È necessario tenere traccia dei byte che svolgono la funzione di "byte iniziali".  In un determinato set di caratteri multibyte, sia i byte iniziali che i byte finali sono compresi in intervalli specifici.  Quando questi intervalli si sovrappongono, può essere necessario valutare nel contesto se un determinato byte funga da byte iniziale o finale.  
  
-   Supporto per strumenti che semplificano la programmazione MBCS di applicazioni scritte per i mercati internazionali.  
  
     Il sistema di sviluppo Visual C\+\+, compresi l'editor integrato del codice sorgente, il debugger e gli strumenti della riga di comando, supporta completamente il formato MBCS quando viene eseguito su una versione del sistema operativo Windows predisposta per tale formato.  Per ulteriori informazioni, vedere [Supporto per MBCS in Visual C\+\+](../text/mbcs-support-in-visual-cpp.md).  
  
> [!NOTE]
>  In questa documentazione il termine MBCS viene utilizzato per descrivere tutti i tipi di supporto non Unicode per caratteri multibyte.  In Visual C\+\+ MBCS è sempre sinonimo di DBCS.  Non sono infatti supportati i set di caratteri superiori a due byte.  
  
 Per definizione, il set di caratteri ASCII è un sottoinsieme di tutti i set di caratteri multibyte.  In molti set di caratteri multibyte ciascun carattere compreso nell'intervallo tra 0x00 e  0x7F è identico al carattere con lo stesso valore nel set di caratteri ASCII.  Nelle stringhe di caratteri ASCII e MBCS, ad esempio, il carattere **NULL** \('\\0'\) a un byte ha il valore 0x00 e indica il carattere di terminazione null.  
  
## Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Abilitazione di risorse internazionali](../text/international-enabling.md)