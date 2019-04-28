---
title: Documentazione XML (Visual C++)
ms.date: 11/04/2016
helpviewer_keywords:
- XML documentation
- XML, documentation comments in source code
- comments, C++ source code files
- /// delimiter for C++ documentation
ms.assetid: a1aec1c5-b2d1-4c74-83ae-1dbbbb76b506
ms.openlocfilehash: c46cb77dd2efe41a41c7108115d6d22808782f01
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62316340"
---
# <a name="xml-documentation-visual-c"></a>Documentazione XML (Visual C++)

In Visual C++ è possibile aggiungere commenti al codice sorgente che verrà elaborato in un file XML. Questo file può essere l'input in un processo che crea la documentazione per le classi nel codice.

In un file di codice Visual C++ i commenti della documentazione XML devono essere posizionati direttamente prima della definizione di un metodo o tipo. I commenti possono essere usati per popolare il suggerimento dati Informazioni rapide Intellisense negli scenari seguenti:

1. quando il codice viene compilato come un componente Windows Runtime con un file con estensione winmd associato

1. quando il codice sorgente è incluso nel progetto corrente

1. in una raccolta le cui dichiarazioni e implementazioni di tipo si trovano nello stesso file di intestazione

> [!NOTE]
>  Nella versione corrente i commenti del codice non vengono elaborati sui modelli o su qualsiasi elemento contenente un tipo di modello (ad esempio, una funzione che accetta un parametro come un modello). Aggiungendo tali commenti si otterrà un comportamento non definito.

Per informazioni dettagliate sulla creazione di un file XML con i commenti della documentazione, vedere gli argomenti seguenti.

|Per informazioni su|Vedere|
|---------------------------|---------|
|Opzioni del compilatore da usare|[/doc](doc-process-documentation-comments-c-cpp.md)|
|Tag che si possono usare per specificare le funzionalità usate comunemente nella documentazione|[Tag consigliati per i commenti relativi alla documentazione](recommended-tags-for-documentation-comments-visual-cpp.md)|
|Stringhe ID generate dal compilatore per identificare i costrutti nel codice|[Elaborazione del file XML](dot-xml-file-processing.md)|
|Come delimitare i tag della documentazione|[Delimitatori per i tag della documentazione di Visual C++](delimiters-for-visual-cpp-documentation-tags.md)|
|Generazione di un file XML da uno o più file con estensione xdc.|[Riferimento a XDCMake](xdcmake-reference.md)|
|Collegamenti a informazioni su XML in quanto correlato alle aree di funzionalità di Visual Studio|[XML in Visual Studio](/visualstudio/xml-tools/xml-tools-in-visual-studio)|

Se è necessario inserire i caratteri speciali XML nel testo di un commento della documentazione, è necessario usare le entità XML o una sezione CDATA.

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../../extensions/component-extensions-for-runtime-platforms.md)
