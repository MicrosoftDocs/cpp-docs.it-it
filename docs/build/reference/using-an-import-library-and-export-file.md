---
title: Utilizzo di una libreria di importazione e di un file di esportazione
ms.date: 11/04/2016
helpviewer_keywords:
- circular exports
- import libraries, using
- export files
ms.assetid: 2634256a-8aa5-4495-8c9e-6cde10e4ed76
ms.openlocfilehash: 75a93d97478050718b3f6c32fa83d7320a38954b
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57412978"
---
# <a name="using-an-import-library-and-export-file"></a>Utilizzo di una libreria di importazione e di un file di esportazione

Quando un programma (un file eseguibile o una DLL) consente di esportare in un altro programma che importa anche da, o se più di due programmi entrambe esportano e importare uno da altro, i comandi per collegare questi programmi devono adattarsi esportazioni circolari.

In una situazione senza esportazioni circolari, quando un programma che usa il collegamento Esporta da un altro programma, è necessario specificare la libreria di importazione per il programma di esportazione. La libreria di importazione per il programma di esportazione viene creata quando si collega il programma di esportazione. Pertanto, è necessario collegare il programma di esportazione prima del programma di importazione. Ad esempio, se DLL importazione da uno. dll, è necessario collegare uno. dll e ottenere la libreria di importazione lib. Successivamente, specificare lib durante il collegamento di due. dll. Quando il linker crea due. dll, crea anche la libreria di importazione, lib. Usare lib durante il collegamento di programmi che importare dalla DLL.

Tuttavia, in una situazione di esportazione circolare, non è possibile collegare tutti i programmi interdipendenti tramite le librerie di importazione da altri programmi. Nell'esempio illustrato in precedenza, se DLL esporta anche a uno. dll, la libreria di importazione per due. dll non esiste ancora quando uno. dll è collegata. Quando sono presenti esportazioni circolari, è necessario utilizzare LIB per creare una libreria di importazione ed esportazione di file per uno dei programmi.

Per iniziare, scegliere uno dei programmi in cui l'esecuzione di LIB. Nel comando LIB, elencare tutti gli oggetti e librerie per il programma e specificare l'opzione /DEF. Se il programma Usa un file def o /EXPORT specifiche, specificarli anche.

Dopo aver creato la libreria di importazione (lib) e il file di esportazione (EXP) per il programma, si usa la libreria di importazione quando si collegano di altro programma o programmi. COLLEGAMENTO Crea una libreria di importazione per ogni programma di esportazione compilato. Ad esempio, se si esegue LIB in oggetti e le esportazioni di DLL, è creare lib ed EXP. È ora possibile usare LIB quando collegherà; Questo passaggio Crea anche la libreria di importazione lib.

Infine, collegare il programma che è iniziato con. Il comando di collegamento, specificare gli oggetti e librerie per il programma, il file EXP LIB creato per il programma e la libreria di importazione o librerie per le esportazioni utilizzate dal programma. Per continuare l'esempio, il comando di collegamento per uno. dll contiene EXP e LIB, nonché gli oggetti e librerie che concorrono a uno. dll. Non si specifica il file con estensione def o /EXPORT specifiche nel comando collegamento. Queste informazioni non sono necessarie perché le definizioni delle esportazioni sono contenuti nel file EXP. Quando si collegano tramite un file. exp, collegamento non crea una libreria di importazione, perché si presuppone che ne è stato creato quando è stato creato il file EXP.

## <a name="see-also"></a>Vedere anche

[Uso di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md)
