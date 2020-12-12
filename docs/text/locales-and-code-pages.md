---
description: 'Altre informazioni su: impostazioni locali e tabelle codici'
title: Impostazioni locali e tabelle codici
ms.date: 11/04/2016
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
ms.openlocfilehash: f8b5310d7712617b1397bc42ef6ec58e5b3297ca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207202"
---
# <a name="locales-and-code-pages"></a>Impostazioni locali e tabelle codici

Un ID delle impostazioni locali riflette le convenzioni locali e la lingua per una determinata area geografica. Una lingua può essere parlata in più di un paese, ad esempio il portoghese è parlato sia in Brasile che in Portogallo. Per contro, è possibile che in un paese siano parlate più lingue ufficiali. In Canada, ad esempio, sono disponibili due lingue: inglese e francese. In Canada sono quindi presenti due impostazioni locali distinte: Canadian-English e il francese canadese. Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari.

La lingua determina le convenzioni di formattazione del testo e dei dati, mentre il paese determina le convenzioni locali. Ogni linguaggio dispone di un mapping univoco, rappresentato da tabelle codici, che include caratteri diversi da quelli nell'alfabeto (ad esempio, segni di punteggiatura e numeri). Una tabella codici è un set di caratteri ed è correlata al linguaggio. Di conseguenza, le [impostazioni locali](../c-runtime-library/locale.md) sono una combinazione univoca di lingua, paese/area geografica e tabella codici. Le impostazioni locali e le impostazioni della tabella codici possono essere modificate in fase di esecuzione chiamando la funzione [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) .

Lingue diverse possono utilizzare tabelle codici diverse. Ad esempio, la tabella codici ANSI 1252 viene utilizzata per l'inglese e la maggior parte delle lingue europee e la tabella codici ANSI 932 viene utilizzata per il Kanji giapponese. Praticamente tutte le tabelle codici condividono il set di caratteri ASCII per i caratteri 128 più bassi (da 0x00 a 0x7F).

Ogni tabella codici a byte singolo può essere rappresentata in una tabella (con 256 voci) come mapping dei valori di byte ai caratteri (inclusi i numeri e i segni di punteggiatura) o glifi. Qualsiasi tabella codici multibyte può anche essere rappresentata come una tabella di dimensioni molto grandi (con voci 64K) di valori a byte doppio per i caratteri. In pratica, tuttavia, viene in genere rappresentato come una tabella per i primi 256 caratteri a byte singolo e come intervalli per i valori a byte doppio.

Per altre informazioni sulle tabelle codici, vedere [Tabelle codici](../c-runtime-library/code-pages.md).

La libreria di runtime del linguaggio C dispone di due tipi di tabelle codici interne: impostazioni locali e multibyte. È possibile modificare la tabella codici corrente durante l'esecuzione del programma. vedere la documentazione relativa alle funzioni [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) e [_setmbcp](../c-runtime-library/reference/setmbcp.md) . Inoltre, la libreria di runtime potrebbe ottenere e usare il valore della tabella codici del sistema operativo, che è costante per la durata dell'esecuzione del programma.

Quando la tabella codici delle impostazioni locali viene modificata, il comportamento del set di funzioni dipendente dalle impostazioni locali diventa quello stabilito dalla tabella codici scelta. Per impostazione predefinita, tutte le funzioni dipendenti dalle impostazioni locali iniziano l'esecuzione con una tabella codici delle impostazioni locali univoca per le impostazioni locali "C". È possibile modificare la tabella codici delle impostazioni locali interne, nonché altre proprietà specifiche delle impostazioni locali, chiamando la `setlocale` funzione. Una chiamata a `setlocale` (LC_ALL, "") imposta le impostazioni locali su indicate dalle impostazioni locali dell'utente del sistema operativo.

Analogamente, quando viene modificata la tabella codici multibyte, il comportamento delle funzioni multibyte diventa quello stabilito dalla tabella codici scelta. Per impostazione predefinita, tutte le funzioni multibyte iniziano l'esecuzione con una tabella codici multibyte corrispondente alla tabella codici predefinita del sistema operativo. È possibile modificare la tabella codici multibyte interna chiamando la `_setmbcp` funzione.

La funzione di runtime C `setlocale` imposta, modifica o esegue query su alcune o tutte le informazioni sulle impostazioni locali del programma corrente. La routine [_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) è una versione a caratteri wide di `setlocale` . gli argomenti e i valori restituiti di `_wsetlocale` sono stringhe a caratteri wide.

## <a name="see-also"></a>Vedi anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Vantaggi della portabilità dei set di caratteri](../text/benefits-of-character-set-portability.md)
