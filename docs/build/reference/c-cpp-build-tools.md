---
title: Ulteriori strumenti di compilazione MSVC
ms.date: 08/28/2019
f1_keywords:
- c.build
helpviewer_keywords:
- builds [C++], C/C++ tools
- tools [C++], build
ms.assetid: 48d9daf4-6bbf-473a-8ce2-bf2923b69f80
ms.openlocfilehash: 53c7c2f8c162cd851b4612e75ba14b019d9cbd63
ms.sourcegitcommit: e10a5feea193c249ddc5a6faba48e7c6d8784e73
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/30/2019
ms.locfileid: "70177286"
---
# <a name="additional-msvc-build-tools"></a>Ulteriori strumenti di compilazione MSVC

Visual Studio fornisce le seguenti utilità della riga di comando per la visualizzazione o la modifica dell'output di compilazione:

- [Lib. EXE](lib-reference.md) viene usato per creare e gestire una libreria di file oggetto COFF (Common Object File Format). Può inoltre essere utilizzato per creare file di esportazione e librerie di importazione per fare riferimento a definizioni esportate.

- [Editbin). ](editbin-reference.md)Per modificare i file binari COFF, viene usato exe.

- [Dumpbin. EXE](dumpbin-reference.md) Visualizza informazioni (ad esempio una tabella dei simboli) sui file binari COFF.

- [NMAKE](nmake-reference.md) legge ed esegue Makefile.

- [ERRLOOK](value-edit-control.md), l'utilità di ricerca degli errori, recupera un messaggio di errore di sistema o un messaggio di errore del modulo in base al valore immesso.

- [XDCMake](xdcmake-reference.md). Strumento per l'elaborazione di file di codice sorgente che contengono commenti di documentazione contrassegnati con tag XML.

- [BSCMAKE. EXE](bscmake-reference.md) (fornito solo per compatibilità con le versioni precedenti) compila un file di informazioni di visualizzazione (con estensione BSC) che contiene informazioni sui simboli (classi, funzioni, dati, macro e tipi) nel programma. Queste informazioni vengono visualizzate in Esplora finestre all'interno dell'ambiente di sviluppo. È anche possibile compilare un file BSC nell'ambiente di sviluppo.

Il Windows SDK dispone anche di diversi strumenti di compilazione, tra cui [RC. EXE](/windows/win32/menurc/resource-compiler), che viene C++ richiamato dal compilatore per compilare risorse native di Windows, ad esempio finestre di dialogo, pagine delle proprietà, bitmap, tabelle di stringhe e così via.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[Nomi decorati](decorated-names.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
