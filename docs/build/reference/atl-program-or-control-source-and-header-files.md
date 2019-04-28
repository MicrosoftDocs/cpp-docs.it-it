---
title: File di intestazione e di origine di un controllo o programma ATL
ms.date: 11/04/2016
helpviewer_keywords:
- file types [C++], ATL source and headers
ms.assetid: cb65372f-4880-4007-b582-a52eaa568fd1
ms.openlocfilehash: e315586de57ca65c60c435c436734bcdededed54
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273027"
---
# <a name="atl-program-or-control-source-and-header-files"></a>File di intestazione e di origine di un controllo o programma ATL

I file seguenti vengono creati quando si crea un progetto ATL in Visual Studio, a seconda delle opzioni selezionate per il progetto creato.

Tutti questi file si trovano nella directory *Projname* e anche nella cartella File di intestazione (file con estensione h) oppure nella cartella File di origine (file con estensione cpp) in Esplora soluzioni.

|Nome file|Descrizione|
|---------------|-----------------|
|*Projname*.h|File di inclusione principale contenente le definizioni di interfaccia di C++ e le dichiarazioni di GUID degli elementi definiti in ATLSample.idl. Viene rigenerato da MIDL durante la compilazione.|
|*Projname*.cpp|File di origine principale del programma. Contiene l'implementazione delle esportazioni di DLL per un server in-process e l'implementazione di `WinMain` per un server locale. Per un servizio, implementa anche tutte le funzioni di gestione del servizio.|
|Resource.h|File di intestazione per il file di risorse.|
|StdAfx.cpp|Include i file StdAfx.h e Atlimpl.cpp.|
|StdAfx.h|Include i file di intestazione ATL.|

## <a name="see-also"></a>Vedere anche

[Tipi di file creati per i progetti di Visual C++](file-types-created-for-visual-cpp-projects.md)<br>
[File di intestazione e di origine di un controllo o programma MFC](mfc-program-or-control-source-and-header-files.md)<br>
[Progetti CLR](files-created-for-clr-projects.md)
