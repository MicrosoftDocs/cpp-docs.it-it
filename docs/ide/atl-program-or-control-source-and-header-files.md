---
title: File di intestazione e di origine di un controllo o di un programma ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- file types [C++], ATL source and headers
ms.assetid: cb65372f-4880-4007-b582-a52eaa568fd1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 95fa6fa506e4f471b90d39659b0908e2755b72b0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46398703"
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

[Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)<br>
[File di intestazione e di origine di un controllo o programma MFC](../ide/mfc-program-or-control-source-and-header-files.md)<br>
[Progetti CLR](../ide/files-created-for-clr-projects.md)