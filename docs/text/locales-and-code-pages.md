---
title: Impostazioni locali e tabelle codici | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- locales [C++], about locales
- locale IDs [C++]
- locales [C++]
- code pages [C++]
- code pages [C++], dynamically changing
- character sets [C++], code pages
- multibyte code pages [C++]
- character sets [C++], locales
- localization [C++], code pages
- localization [C++], locales
- code pages [C++], locales
- conventions [C++], international character support
ms.assetid: bd937361-b6d3-4c98-af95-beb7c903187b
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b1c7dd3c5356df7b80f21605e325158e87cc5a71
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33858146"
---
# <a name="locales-and-code-pages"></a>Impostazioni locali e tabelle codici
Un ID impostazioni locali riflette le convenzioni locali e una lingua per una determinata area geografica. Una lingua può essere parlata in più di un paese, ad esempio il portoghese è parlato sia in Brasile che in Portogallo. Per contro, è possibile che in un paese siano parlate più lingue ufficiali. Ad esempio, Canada ha due lingue: inglese e francese. Pertanto, Canada dispone di due diverse impostazioni locali: inglese (Canada) e francese (Canada). Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari.  
  
 La lingua determina le convenzioni di formattazione del testo e dei dati, mentre il paese determina le convenzioni locali. Ogni linguaggio dispone di un mapping univoco, rappresentato da tabelle codici, che include caratteri diversi da quelli dell'alfabeto (ad esempio segni di punteggiatura e numeri). Una tabella codici è un set di caratteri ed è correlata al linguaggio. Di conseguenza, un [internazionali](../c-runtime-library/locale.md) è una combinazione univoca di lingua, paese e tabella codici. L'impostazione della pagina delle impostazioni locali e il codice può essere modificato in fase di esecuzione chiamando il [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) (funzione).  
  
 Lingue è potrebbero utilizzare tabelle codici diverse. Ad esempio, la tabella codici ANSI 1252 viene utilizzata per l'inglese e la maggior parte delle lingue europee, e la tabella codici ANSI 932 viene utilizzata per il Kanji giapponese. Quasi tutte le tabelle codici condividono il carattere ASCII impostato per i primi 128 caratteri (0x00 e 0x7F).  
  
 Eventuali codici a byte singolo possono essere rappresentato in una tabella (con le 256 voci) come un mapping di valori byte in caratteri, compresi i numeri e segni di punteggiatura, o icone. Qualsiasi tabella codici multibyte possono anche essere rappresentato come una tabella di dimensioni molto grande (con le voci di 64 KB) di valori a byte doppio a caratteri. In pratica, tuttavia, vengono generalmente rappresentati come una tabella per i primi 256 caratteri (a byte singolo) e come gli intervalli per i valori a byte doppio.  
  
 Per altre informazioni sulle tabelle codici, vedere [Code Pages](../c-runtime-library/code-pages.md).  
  
 La libreria di run-time C è disponibili due tipi di tabelle codici interne: locali e multibyte. È possibile modificare la tabella codici corrente durante l'esecuzione del programma (vedere la documentazione per il [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) e [setmbcp](../c-runtime-library/reference/setmbcp.md) funzioni). Inoltre, la libreria run-time potrebbe ottenere e utilizzare il valore della tabella codici del sistema operativo, che è una costante per la durata dell'esecuzione del programma.  
  
 Quando cambia la tabella codici delle impostazioni locali, il comportamento del set di funzioni a quello impostato per la tabella codici scelto dipende dalla lingua. Per impostazione predefinita, tutte le funzioni dipendente dalle impostazioni locali dall'iniziano dell'esecuzione con una tabella codici delle impostazioni locali univoca per le impostazioni locali "C". È possibile modificare la tabella codici delle impostazioni locali interno (così come altre proprietà specifiche delle impostazioni locali) chiamando il `setlocale` (funzione). Una chiamata a `setlocale`(LC_ALL, "") imposta le impostazioni locali a quello indicato da impostazioni locali dell'utente del sistema operativo.  
  
 Analogamente, quando la tabella codici multibyte cambia, il comportamento delle modifiche funzioni multibyte a quello impostato dalla tabella codici selezionata. Per impostazione predefinita, tutte le funzioni multibyte avviano l'esecuzione con una tabella codici multibyte corrispondente a una tabella codici predefinita del sistema operativo. È possibile modificare la tabella codici multibyte interna chiamando il `_setmbcp` (funzione).  
  
 La funzione di runtime C `setlocale` imposta, modifica o una query di alcune o tutte le informazioni delle impostazioni locali del programma corrente. Il [wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) routine è una versione a caratteri wide di `setlocale`; gli argomenti e valori restituiti di `_wsetlocale` sono stringhe a caratteri wide.  
  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Vantaggi della portabilità dei set di caratteri](../text/benefits-of-character-set-portability.md)