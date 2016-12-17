---
title: "Sequenze di escape | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "(') (virgoletta singola)"
  - "? (simbolo)"
  - "? (simbolo), carattere della sequenza di escape"
  - "\ (simbolo nella sequenza di escape)"
  - "\a (sequenza di escape)"
  - "\f (sequenza di escape)"
  - "\n (sequenza di escape)"
  - "\r (sequenza di escape)"
  - "\t (sequenza di escape)"
  - "\v (sequenza di escape)"
  - "carattere backspace (sequenza di escape)"
  - "carattere di controllo del segnale acustico di avviso (sequenza di escape \a)"
  - "ritorni a capo"
  - "carattere di controllo (sequenze di escape)"
  - "doppia barra rovesciata"
  - "caratteri di escape"
  - "sequenze di escape"
  - "carattere di avanzamento modulo (sequenza di escape \f)"
  - "sequenza di escape esadecimale"
  - "tabulazione orizzontale (sequenza di escape \t)"
  - "carattere di nuova riga (sequenza di escape \n)"
  - "caratteri di controllo non grafici"
  - "sequenza di escape ottale"
  - "punto interrogativo, rappresentazione formale"
  - "virgolette, singola"
  - "tabulazione (sequenza di escape \t)"
  - "tabulazione verticale (sequenza di escape \v)"
ms.assetid: 5aef377f-a76c-4d5c-aa04-8308758ad6a8
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sequenze di escape
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le sequenze di caratteri sono costituite da una barra rovesciata \(**\\**\) seguita da una lettera o da una combinazione di cifre denominate "caratteri di escape". Per rappresentare un carattere di nuova riga, una virgoletta singola o altri caratteri specifici in una costante carattere, è necessario usare sequenze di escape.  Una sequenza di escape verrà considerata come un singolo carattere ed è quindi valida come costante carattere.  
  
 Le sequenze di escape in genere sono usate per specificare azioni come il ritorno a capo e le tabulazioni su terminali e stampanti.  Tali sequenze vengono usate per fornire le rappresentazioni letterali dei caratteri non stampabili e dei caratteri che in genere hanno significati speciali, ad esempio le virgolette doppie \(**"**\).  La tabella seguente elenca le sequenze di escape ANSI e gli elementi che rappresentano.  
  
 Si noti che il punto interrogativo preceduto da una barra rovesciata \(**\\?**\) specifica un punto interrogativo letterale nei casi in cui la sequenza di caratteri venga interpretata erroneamente come un trigramma.  Per altre informazioni, vedere [Trigrammi](../c-language/trigraphs.md).  
  
### Sequenze di escape  
  
|Sequenza di escape|Rappresenta|  
|------------------------|-----------------|  
|**\\a**|Segnale acustico \(avviso\)|  
|**\\b**|BACKSPACE|  
|**\\f**|Modulo continuo|  
|**\\n**|Nuova riga|  
|**\\r**|Ritorno a capo|  
|**\\t**|Tabulazione orizzontale|  
|**\\v**|Tabulazione verticale|  
|**\\'**|Virgoletta singola|  
|**\\"**|Virgolette doppie|  
|**\\\\**|Barra rovesciata|  
|**\\?**|Punto interrogativo letterale|  
|**\\** *ooo*|Carattere ASCII in notazione ottale|  
|**\\x** *hh*|Carattere ASCII in notazione esadecimale|  
|**\\x** *hhhh*|Carattere unicode in notazione esadecimale se la sequenza di escape viene usata in una costante a caratteri estesi o in una stringa letterale Unicode.<br /><br /> Ad esempio, `WCHAR f = L'\x4e00'` o `WCHAR b[] = L"The Chinese character for one is \x4e00"`.|  
  
 **Sezione specifica Microsoft**  
  
 Se una barra rovesciata è preceduta da un carattere non presente nella tabella, il compilatore gestisce il carattere indefinito come carattere esteso.  Ad esempio, `\c` viene considerato come `c`.  
  
 **Fine sezione specifica Microsoft**  
  
 Le sequenze di escape consentono di inviare i caratteri di controllo non grafici su un dispositivo di visualizzazione.  Ad esempio, il carattere ESC \(**\\033**\) viene spesso usato come primo carattere di un comando di controllo per un terminale o una stampante.  Alcune sequenze di escape sono specifiche del dispositivo.  La tabulazione verticale e il carattere di avanzamento carta \(**\\v** e **\\f**\) non influiscono ad esempio sull'output dello schermo, ma consentono di eseguire operazioni di stampa appropriate.  
  
 È inoltre possibile usare la barra rovesciata \(**\\**\) come carattere di continuazione.  Quando un carattere di nuova riga \(equivalente alla pressione del tasto INVIO\) è immediatamente successivo alla barra rovesciata, il compilatore ignora la barra rovesciata e il carattere di nuova riga e tratta la riga successiva come parte della riga precedente.  Questo diviene particolarmente utile per le definizioni di preprocessore con più di una singola riga.  Ad esempio:  
  
```  
#define assert(exp) \  
( (exp) ? (void) 0:_assert( #exp, __FILE__, __LINE__ ) )  
```  
  
## Vedere anche  
 [Costanti carattere C](../c-language/c-character-constants.md)