---
title: Le impostazioni locali e tabelle codici | Microsoft Docs
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9952f0bf27202c468e38ff3fb6aa701a0d6f9163
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594839"
---
# <a name="locales-and-code-pages"></a>Impostazioni locali e tabelle codici
Un ID impostazioni locali riflette le convenzioni locali e la lingua per una determinata area geografica. Una lingua può essere parlata in più di un paese, ad esempio il portoghese è parlato sia in Brasile che in Portogallo. Per contro, è possibile che in un paese siano parlate più lingue ufficiali. Ad esempio, in Canada ha due lingue: inglese e francese. Pertanto, in Canada dispone di due diverse impostazioni locali: inglese (Canada) e francese (Canada). Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari.  
  
 La lingua determina le convenzioni di formattazione del testo e dei dati, mentre il paese determina le convenzioni locali. Ogni linguaggio ha un mapping univoco, rappresentato da tabelle codici, che include caratteri diversi da quelli dell'alfabeto (ad esempio i segni di punteggiatura e numeri). Una tabella codici è un set di caratteri ed è correlata al linguaggio. Di conseguenza, una [delle impostazioni locali](../c-runtime-library/locale.md) è una combinazione univoca di lingua, paese/area geografica e tabella codici. L'impostazione della pagina delle impostazioni locali e il codice può essere modificato in fase di esecuzione chiamando il [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) (funzione).  
  
 Diversi linguaggi potrebbero utilizzare tabelle codici diverse. Ad esempio, la tabella codici ANSI 1252 viene utilizzata per l'inglese e la maggior parte delle lingue europee, e la tabella codici ANSI 932 viene utilizzata per il Kanji giapponese. Praticamente tutte le tabelle codici condividono il set per i primi 128 caratteri (da 0x00 a 0x7F) di caratteri ASCII.  
  
 Qualsiasi tabella codici a byte singolo può essere rappresentato in una tabella (con le 256 voci) come un mapping di valori di byte di caratteri (compresi i numeri e segni di punteggiatura), o glifi. Qualsiasi tabella codici multibyte può essere rappresentato anche come una tabella di dimensioni molto grande (con le voci di 64 KB) dei valori a byte doppio a caratteri. In pratica, tuttavia sono generalmente rappresentato come una tabella per i primi 256 caratteri (a byte singolo) e come gli intervalli per i valori a byte doppio.  
  
 Per altre informazioni sulle tabelle codici, vedere [Code Pages](../c-runtime-library/code-pages.md).  
  
 La libreria di runtime C offre due tipi di tabelle codici interni: impostazioni locali e multibyte. È possibile modificare la tabella codici corrente durante l'esecuzione del programma (vedere la documentazione per il [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) e [setmbcp](../c-runtime-library/reference/setmbcp.md) funzioni). Inoltre, la libreria run-time potrebbe ottenere e usare il valore della tabella codici del sistema operativo, ovvero costante per la durata dell'esecuzione del programma.  
  
 Quando cambia la tabella codici delle impostazioni locali, il comportamento del set di modifiche di funzioni a quello impostato per la tabella codici scelto dipende dalla lingua. Per impostazione predefinita, tutte le funzioni dipende dalla lingua iniziano l'esecuzione con una tabella codici delle impostazioni locali univoca per le impostazioni locali "C". È possibile modificare la tabella codici delle impostazioni locali interna (nonché altre proprietà specifiche delle impostazioni locali) chiamando il `setlocale` (funzione). Una chiamata a `setlocale`(LC_ALL, "") imposta le impostazioni locali a quello indicato nelle impostazioni locali dell'utente del sistema operativo.  
  
 Analogamente, quando la tabella codici multibyte cambia il comportamento delle modifiche funzioni multibyte a quello impostato dalla tabella codici selezionata. Per impostazione predefinita, tutte le funzioni multibyte iniziano l'esecuzione con una tabella codici multibyte corrispondente alla tabella codici predefinita del sistema operativo. È possibile modificare la tabella codici multibyte interno chiamando il `_setmbcp` (funzione).  
  
 La funzione di runtime C `setlocale` imposta, modifica o esegue una query alcune o tutte le informazioni delle impostazioni locali del programma corrente. Il [wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) routine è una versione a caratteri wide di `setlocale`; gli argomenti e valori restituiti di `_wsetlocale` sono stringhe a caratteri wide.  
  
## <a name="see-also"></a>Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Vantaggi della portabilità dei set di caratteri](../text/benefits-of-character-set-portability.md)