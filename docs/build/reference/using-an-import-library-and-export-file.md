---
description: 'Altre informazioni su: uso di una libreria di importazione e di un file di esportazione'
title: Utilizzo di una libreria di importazione e di un file di esportazione
ms.date: 11/04/2016
helpviewer_keywords:
- circular exports
- import libraries, using
- export files
ms.assetid: 2634256a-8aa5-4495-8c9e-6cde10e4ed76
ms.openlocfilehash: f42a98ebe19cb32fb77964f26c37928776b5b30c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247020"
---
# <a name="using-an-import-library-and-export-file"></a>Utilizzo di una libreria di importazione e di un file di esportazione

Quando un programma (un file eseguibile o una DLL) viene esportato in un altro programma da cui importa anche o se più di due programmi si esportano e importano tra loro, i comandi per collegare questi programmi devono contenere esportazioni circolari.

In una situazione senza esportazioni circolari, quando si collega un programma che utilizza esportazioni da un altro programma, è necessario specificare la libreria di importazione per il programma di esportazione. La libreria di importazione per il programma di esportazione viene creata quando si collega il programma di esportazione. È pertanto necessario collegare il programma di esportazione prima del programma di importazione. Ad esempio, se TWO.dll importa da ONE.dll, è necessario innanzitutto collegare ONE.dll e ottenere la libreria di importazione ONE. lib. Quindi, si specifica una. lib durante il collegamento TWO.dll. Quando il linker crea TWO.dll, crea anche la relativa libreria di importazione, due. lib. Usare due. lib quando si collegano programmi che importano da TWO.dll.

Tuttavia, in una situazione di esportazione circolare, non è possibile collegare tutti i programmi interdipendenti utilizzando le librerie di importazione degli altri programmi. Nell'esempio illustrato in precedenza, se TWO.dll esporta anche ONE.dll, la libreria di importazione per TWO.dll non esisterà ancora quando viene collegato ONE.dll. Quando sono presenti esportazioni circolari, è necessario utilizzare LIB per creare una libreria di importazione e un file di esportazione per uno dei programmi.

Per iniziare, scegliere uno dei programmi su cui eseguire LIB. Nel comando LIB elencare tutti gli oggetti e le librerie per il programma e specificare/DEF. Se il programma usa un file con estensione def o/EXPORT, specificare anche questi dati.

Dopo aver creato la libreria di importazione (lib) e il file di esportazione (exp) per il programma, è possibile utilizzare la libreria di importazione per collegare gli altri programmi o programmi. COLLEGAMENTO crea una libreria di importazione per ogni programma di esportazione compilato. Se, ad esempio, si esegue LIB sugli oggetti e le esportazioni per ONE.dll, è possibile creare un. lib e un. exp. È ora possibile usare una. lib per il collegamento di TWO.dll; Questo passaggio crea anche la libreria di importazione TWO. lib.

Infine, collegare il programma avviato con. Nel comando collegamento specificare gli oggetti e le librerie per il programma, il file con estensione exp creato per il programma e la libreria di importazione o le librerie per le esportazioni utilizzate dal programma. Per continuare l'esempio, il comando di collegamento per ONE.dll contiene un. exp e due. lib, nonché gli oggetti e le librerie che entrano ONE.dll. Non specificare il file def o le specifiche/EXPORT nel comando di collegamento. Queste non sono necessarie perché le definizioni di esportazione sono contenute nel file con estensione EXP. Quando si esegue il collegamento utilizzando un file con estensione EXP, il collegamento non crea una libreria di importazione, perché presuppone che ne sia stata creata una al momento della creazione del file con estensione EXP.

## <a name="see-also"></a>Vedi anche

[Utilizzo di librerie di importazione ed esportazione di file](working-with-import-libraries-and-export-files.md)
