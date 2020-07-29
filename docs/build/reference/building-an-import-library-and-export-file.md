---
title: Compilazione di una libreria di importazione e di un file di esportazione
ms.date: 09/05/2018
f1_keywords:
- VC.Project.VCLibrarianTool.ModuleDefinitionFile
- VC.Project.VCLibrarianTool.ExportNamedFunctions
- VC.Project.VCLibrarianTool.GenerateDebug
- VC.Project.VCLibrarianTool.ForceSymbolReferences
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
ms.openlocfilehash: 5cb5224b3edaf84dbcb7c0429044a647fb5ac19a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229753"
---
# <a name="building-an-import-library-and-export-file"></a>Compilazione di una libreria di importazione e di un file di esportazione

Per compilare una libreria di importazione e un file di esportazione, usare la sintassi seguente:

> **Lib/def**[**:**<em>deffile</em>] [*Opzioni*] [*objfiles*] [*librerie*]

Quando si specifica/DEF, LIB crea i file di output dalle specifiche di esportazione passate nel comando LIB. Sono disponibili tre metodi per specificare le esportazioni, elencate nell'ordine di utilizzo consigliato:

1. Una **`__declspec(dllexport)`** definizione in uno dei *objfiles* o delle *librerie*

1. Specifica di/EXPORT:*nome* nella riga di comando di lib

1. Definizione in un'istruzione **exports** in un *deffile*

Si tratta degli stessi metodi usati per specificare le esportazioni durante il collegamento di un programma di esportazione. Un programma può utilizzare più di un metodo. È possibile specificare parti del comando LIB (ad esempio, più specifiche *objfiles* o/export) in un file di comando nel comando LIB, esattamente come è possibile in un comando di collegamento.

Le opzioni seguenti si applicano alla compilazione di una libreria di importazione e di un file di esportazione:

> **/Out:** *importazione*

Esegue l'override del nome del file di output predefinito per la libreria di *importazione* da creare. Se/OUT non è specificato, il nome predefinito è il nome di base del primo file oggetto o della raccolta nel comando LIB e l'estensione LIB. Al file di esportazione viene assegnato lo stesso nome di base della libreria di importazione e dell'estensione EXP.

> **/Export:** *entryname* \[ **=** *internalname*] \[ , **\@** <em>ordinale</em> \[ , **NoName**]] \[ , **Data**]

Esporta una funzione dal programma per consentire ad altri programmi di chiamare la funzione. È anche possibile esportare dati (usando la parola chiave **Data** ). Le esportazioni vengono in genere definite in una DLL.

*Entryname* è il nome della funzione o dell'elemento di dati che deve essere utilizzato dal programma chiamante. Facoltativamente, è possibile specificare *internalname* come funzione nota nel programma di definizione. per impostazione predefinita, *internalname* è uguale a *entryname*. Il *numero ordinale* specifica un indice nella tabella export nell'intervallo compreso tra 1 e 65.535; Se non si specifica un *numero ordinale*, lib ne assegna uno. La parola chiave **NoName** Esporta la funzione solo come ordinale, senza *entryname*. La parola chiave **Data** viene utilizzata per esportare oggetti solo dati.

> **/Include:** *simbolo*

Aggiunge il *simbolo* specificato alla tabella dei simboli. Questa opzione è utile per forzare l'utilizzo di un oggetto libreria che altrimenti non verrebbe incluso.

Si noti che se si crea la libreria di importazione in un passaggio preliminare, prima di creare il file con estensione dll, è necessario passare lo stesso set di file oggetto quando si compila la libreria di importazione.

## <a name="see-also"></a>Vedere anche

[Utilizzo di librerie di importazione ed esportazione di file](working-with-import-libraries-and-export-files.md)
