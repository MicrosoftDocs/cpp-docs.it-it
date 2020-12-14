---
description: 'Altre informazioni su: ridistribuzione di controlli ActiveX Visual C++'
title: Ridistribuzione di controlli ActiveX di Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- controls [C++], redistributing
- controls [C++], distributing
ms.assetid: eefbb7e4-d28c-4c35-98bf-d9540cfaae83
ms.openlocfilehash: 4960af93b140e883ff50f6ff81824cd9e67d44f6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247345"
---
# <a name="redistributing-visual-c-activex-controls"></a>Ridistribuzione di controlli ActiveX di Visual C++

Visual C++ 6.0 fornisce controlli ActiveX che è possibile usare in applicazioni da ridistribuire in seguito. Questi controlli non sono più inclusi in Visual C++. In base ai contratti di licenza di Visual C++ 6.0, è possibile ridistribuire questi controlli con le applicazioni sviluppate in Visual C++.

> [!NOTE]
> Visual C++ 6.0 non è più supportato da Microsoft.

Per l'elenco dei controlli ActiveX di Visual C++ 6.0 ridistribuibili, vedere Common\Redist\Redist.txt nel disco 1 dei CD di Visual C++ 6.0.

Quando si distribuiscono applicazioni, è necessario installare e registrare, tramite Regsvr32.exe, il file con estensione ocx corrispondente al controllo ActiveX usato. Assicurarsi anche che nel computer di destinazione siano presenti le versioni correnti dei file di sistema seguenti (un asterisco indica che il file deve essere registrato):

- Asycfilt.dll

- Comcat.dll \*

- Oleaut32.dll \*

- Olepro32.dll \*

- Stdole2.tlb

Se queste DLL non sono disponibili nel sistema di destinazione, è necessario aggiornarle tramite il meccanismo stabilito per l'aggiornamento del sistema operativo corrispondente. È possibile scaricare i Service Pack più recenti per i sistemi operativi Windows da [http://windowsupdate.microsoft.com](https://windowsupdate.microsoft.com) .

Se si usa un controllo ActiveX che si connette a un database, è anche necessario replicare il nome dell'origine dati nel computer di destinazione. Tale operazione può essere eseguita a livello di codice tramite funzioni, ad esempio `ConfigDSN`.

Alcuni controlli ActiveX ridistribuibili hanno dipendenze aggiuntive. Per ogni file con estensione ocx nella cartella Os\System del CD di Visual C++ 6.0 è presente anche un file con estensione dep. Per ogni file con estensione ocx che si vuole ridistribuire, cercare una o più voci USES nel file con estensione dep corrispondente. Se un file è elencato, è necessario assicurarsi che sia presente nel computer di destinazione. Tutte le DLL che supportano direttamente un file con estensione ocx devono essere registrati. (Per Regsvr32.exe avere esito positivo, il computer di destinazione deve prima contenere tutte le DLL caricate in modo statico dal controllo). Inoltre, se una DLL elencata come dipendenza dispone anche di un file con estensione dep nella cartella Os\System del CD Visual C++ 6,0, è necessario verificare anche che il file DEP per usi le voci.

## <a name="see-also"></a>Vedi anche

[Ridistribuzione di file Visual C++](redistributing-visual-cpp-files.md)
