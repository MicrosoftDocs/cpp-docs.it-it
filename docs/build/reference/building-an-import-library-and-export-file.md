---
title: Compilazione di una libreria di importazione e File di esportazione | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLibrarianTool.ModuleDefinitionFile
- VC.Project.VCLibrarianTool.ExportNamedFunctions
- VC.Project.VCLibrarianTool.GenerateDebug
- VC.Project.VCLibrarianTool.ForceSymbolReferences
dev_langs:
- C++
helpviewer_keywords:
- OUT library manager option
- INCLUDE library manager option
- /DEF library manager option
- exporting data
- import libraries, building
- -INCLUDE library manager option
- /OUT library manager option
- DEF library manager option
- -DEF library manager option
- -OUT library manager option
- /INCLUDE library manager option
- -EXPORT library manager option
- exporting data, export (.exp) files
- /EXPORT library manager option
- EXPORT library manager option
- .lib files
- EXP files
ms.assetid: 2fe4f30a-1dd6-4b05-84b5-0752e1dee354
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c832ee24d500eba28c14713d1c0a092baf90a440
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894616"
---
# <a name="building-an-import-library-and-export-file"></a>Compilazione di una libreria di importazione e di un file di esportazione

Per compilare una libreria di importazione ed esportazione di file, usare la sintassi seguente:

> **LIB /DEF**[**:**<em>deffile</em>] [*opzioni*] [*objfiles*] [*librerie*]

Quando viene specificata l'opzione /DEF, i file di output LIB Crea da esportazione specifiche che vengono passate nel comando LIB. Esistono tre metodi per la specifica di esportazioni, elencate in ordine di preferenza di utilizzo:

1. Oggetto **dllexport** definizione in una delle *objfiles* o *librerie*

2. Una specifica dell'opzione /EXPORT:*nome* nella riga di comando di LIB

3. Una definizione in un **esportazioni** istruzione in un *deffile*

Questi sono gli stessi metodi che consente di specificare le esportazioni durante il collegamento di un programma di esportazione. Un programma può utilizzare più di un metodo. È possibile specificare le parti del comando LIB (ad esempio multiplo *objfiles* o /EXPORT specifiche) in un file di comando del comando LIB, esattamente come è possibile in un comando di collegamento.

Le opzioni seguenti si applicano alla creazione di una libreria di importazione ed esportazione file:

> **/ Ingresso uscita:** *importare*  

Esegue l'override del nome di file di output predefinito per il *importare* libreria da creare. Quando l'opzione /OUT non viene specificato, il nome predefinito è il nome di base del primo file oggetto o della libreria nel comando LIB e l'estensione. lib. Il file di esportazione viene assegnato lo stesso nome di base come la libreria di importazione e l'estensione. exp.

> **/Export:** *entryname* \[ **=** *internalname*]\[,**\@** <em>ordinale</em>\[, **NONAME**]]\[, **dati**]

Esporta una funzione dal programma per consentire ad altri programmi chiamare la funzione. È anche possibile esportare dati (tramite il **dati** parola chiave). Le esportazioni sono in genere definite in una DLL.

Il *entryname* è il nome dell'elemento dati o funzione deve essere utilizzato dal programma chiamante. Facoltativamente, è possibile specificare il *internalname* come la funzione nota nel programma di definizione; per impostazione predefinita *internalname* equivale a *entryname*. Il *ordinale* specifica un indice nella tabella di esportazione nell'intervallo da 1 a 65.535; se non si specifica *ordinale*, ne viene assegnato uno. Il **NONAME** parola chiave consente di esportare la funzione solo come un numero ordinale, senza un' *entryname*. Il **dati** parola chiave viene usata per esportare gli oggetti di soli dati.

> **/ INCLUDONO:** *simbolo*

Aggiunge l'oggetto specificato *simbolo* alla tabella dei simboli. Questa opzione è utile per imporre l'uso di un oggetto libreria che altrimenti non sarebbero incluso.

Si noti che se si crea la libreria di importazione in un passaggio preliminare, prima di creare la DLL, è necessario passare lo stesso set di file oggetto quando si compila il file DLL, come è stato passato quando si compila la libreria di importazione.

## <a name="see-also"></a>Vedere anche

[Uso di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md)