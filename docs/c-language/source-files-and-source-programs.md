---
description: 'Altre informazioni su: file di origine e programmi di origine'
title: File e programmi di origine
ms.date: 11/04/2016
helpviewer_keywords:
- files [C++], source
- programs [C++], source
- source files, specifying in compiler
- source programs
ms.assetid: 18bb2826-17da-48e5-92a2-10e649f1bc9f
ms.openlocfilehash: 9fd389f74efac11288b805d95dc2d95d4ec6d2bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296901"
---
# <a name="source-files-and-source-programs"></a>File e programmi di origine

Un programma di origine può essere suddiviso in uno o più file di origine, denominati anche unità di conversione. L'input al compilatore è definito unità di conversione.

## <a name="syntax"></a>Sintassi

*translation-unit*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*External-Declaration* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*translation-unit* *external-declaration*

*external-declaration*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*definizione di funzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione*

In [Cenni preliminari sulle dichiarazioni](../c-language/overview-of-declarations.md) viene illustrata la sintassi per l'elemento `declaration` non terminale, mentre in *Riferimenti al preprocessore* viene illustrata l'elaborazione dell'[unità di conversione](../preprocessor/phases-of-translation.md).

> [!NOTE]
> Per una spiegazione delle convenzioni di sintassi ANSI, vedere l'introduzione a [Riepilogo di sintassi del linguaggio C](../c-language/c-language-syntax-summary.md).

I componenti di un'unità di conversione sono dichiarazioni esterne che includono definizioni di funzioni e dichiarazioni di identificatore. Tali dichiarazioni e definizioni possono essere presenti in file di origine, file di intestazione, librerie e altri file necessari al programma. È necessario compilare ogni unità di conversione e collegare i file oggetti risultanti per realizzare un programma.

Un programma di origine C è una raccolta di direttive, pragma, dichiarazioni, definizioni, blocchi di istruzioni e funzioni. Per essere componenti validi di un programma Microsoft C, ciascuno di questi elementi deve avere la sintassi illustrata nella presente documentazione, sebbene possa trovarsi in qualsiasi ordine nel programma (in base alle regole indicate nella presente documentazione). La posizione di questi componenti in un programma influisce tuttavia sul modo in cui variabili e funzioni possono essere utilizzate in un programma. Per altre informazioni, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).

I file di origine non devono contenere istruzioni eseguibili. Può essere ad esempio utile posizionare le definizioni di variabili in un file di origine e quindi dichiarare i riferimenti a tali variabili in altri file di origine che le utilizzano. Questa tecnica semplifica la ricerca e l'aggiornamento delle definizioni. Per lo stesso motivo, costanti e macro sono organizzate spesso in file distinti denominati file di inclusione o file di intestazione cui è possibile fare riferimento nei file di origine in base alle esigenze. Vedere *Riferimenti al preprocessore* per informazioni su [macro](../preprocessor/macros-c-cpp.md) e [file di inclusione](../preprocessor/hash-include-directive-c-cpp.md).

## <a name="see-also"></a>Vedi anche

[Struttura del programma](../c-language/program-structure.md)
