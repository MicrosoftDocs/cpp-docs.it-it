---
title: Concetti di applicazioni isolate e assembly side-by-side
ms.date: 05/06/2019
helpviewer_keywords:
- side-by-side assemblies [C++]
- isolated assemblies [C++]
ms.assetid: 945a885f-cb3e-4c8a-a0b9-2c2e3e02cc50
ms.openlocfilehash: f75a95ccca214f437152d13e099fbd9d03eaaee2
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493301"
---
# <a name="concepts-of-isolated-applications-and-side-by-side-assemblies"></a>Concetti di applicazioni isolate e assembly side-by-side

Un'applicazione è considerata un' [applicazione isolata](/windows/win32/SbsCs/isolated-applications) se tutti i suoi componenti sono [assembly side-by-side](/windows/win32/SbsCs/about-side-by-side-assemblies-). Un assembly affiancato è una raccolta di risorse, ovvero un gruppo di DLL, classi Windows, server COM, librerie di tipi o interfacce, distribuite insieme e rese disponibili a un'applicazione affinché vengano utilizzate in fase di esecuzione. In genere, un assembly side-by-side è costituito da una o più DLL.

## <a name="shared-or-private"></a>Assembly condiviso o privato

Un assembly side-by-side può essere condiviso o privato. Gli[assembly affiancati condivisi](/windows/win32/sbscs/about-shared-assemblies-) possono essere usati da più applicazioni nei cui manifesti è specificata una dipendenza dall'assembly. Più versioni di un assembly affiancato sono condivisibili da applicazioni diverse eseguite contemporaneamente. Un [assembly privato](/windows/win32/SbsCs/about-private-assemblies-) è un assembly distribuito insieme a un'applicazione per l'utilizzo esclusivo da parte di tale applicazione. Gli assembly privati vengono installati nella cartella che contiene il file eseguibile dell'applicazione o in una delle relative sottocartelle.

## <a name="manifests-and-search-order"></a>Manifesti e ordine di ricerca

Le applicazioni isolate e gli assembly affiancati sono descritti dai [manifesti](/windows/win32/sbscs/manifests). Un manifesto è un file XML che può essere esterno o incorporato in un'applicazione o in un assembly come risorsa. Il file manifesto di un'applicazione isolata viene utilizzato per gestire i nomi e le versioni di assembly side-by-side condivisi a cui l'applicazione deve essere associata in fase di esecuzione. Nel manifesto di un assembly side-by-side vengono specificati i nomi, le versioni, le risorse e gli assembly dipendenti degli assembly side-by-side. Nel caso di un assembly affiancato condiviso, il manifesto viene installato nella cartella %WINDIR%\WinSxS\Manifests\. Nel caso di un assembly privato, è consigliabile includere il manifesto nella DLL come risorsa con ID uguale a 1. È inoltre possibile assegnare all'assembly privato lo stesso nome della DLL. Per ulteriori informazioni, vedere [informazioni sugli assembly privati](/windows/win32/SbsCs/about-private-assemblies-).

In fase di esecuzione, Windows utilizza le informazioni sull'assembly contenute nel manifesto dell'applicazione per cercare e caricare l'assembly affiancato corrispondente. Se un'applicazione isolata specifica una dipendenza da un assembly, il sistema operativo cerca l'assembly prima tra quelli condivisi nella cache di assembly nativi nella cartella %WINDIR%\WinSxS\. Se non trova l'assembly richiesto, il sistema operativo cerca un assembly privato in una cartella della struttura di directory dell'applicazione. Per altre informazioni, vedere [Assembly Searching Sequence](/windows/win32/SbsCs/assembly-searching-sequence)(Sequenza di ricerca dell'assembly).

## <a name="changing-dependencies"></a>Modifica delle dipendenze

È possibile modificare le dipendenze dell'assembly affiancato dopo la distribuzione dell'applicazione modificando i [file di configurazione dell'editore](/windows/win32/SbsCs/publisher-configuration-files) e i [file di configurazione dell'applicazione](/windows/win32/SbsCs/application-configuration-files). Un file di configurazione dell'editore, noto anche come file dei criteri dell'editore, è un file XML che reindirizza a livello globale le applicazioni e gli assembly da una versione di un assembly affiancato a un'altra versione dello stesso assembly. È ad esempio possibile modificare una dipendenza quando viene distribuita una correzione rapida per la sicurezza per un assembly affiancato e si desidera reindirizzare tutte le applicazioni alla versione corretta. Un file di configurazione dell'applicazione è un file XML che reindirizza un'applicazione specifica da una versione di un assembly affiancato a un'altra versione dello stesso assembly. È possibile utilizzare un file di configurazione dell'applicazione per reindirizzare un'applicazione specifica a una versione di un assembly affiancato diversa da quella definita nel file di configurazione dell'editore. Per altre informazioni, vedere [Configurazione](/windows/win32/SbsCs/configuration).

## <a name="visual-c-libraries"></a>Librerie di Visual C++

In Visual Studio 2005 e Visual Studio 2008 le librerie ridistribuibili come ATL, MFC, CRT, C++ standard, OpenMP e MSDIA vengono distribuite come assembly affiancati condivisi nella cache degli assembly nativi. Nella versione corrente le librerie ridistribuibili utilizzano la distribuzione centrale. Per impostazione predefinita, tutte le applicazioni compilate mediante Visual Studio vengono compilate con il manifesto incorporato nel file binario finale e il manifesto descrive le dipendenze del file binario C++ nelle librerie visive. Per comprendere la generazione di C++ manifesti per le applicazioni, vedere [informazioni sullaC++ generazione di manifesti per C/programmi](understanding-manifest-generation-for-c-cpp-programs.md). Un manifesto non è necessario per le applicazioni collegate staticamente alle librerie che utilizzano o che utilizzano la distribuzione locale. Per altre informazioni sulla distribuzione, vedere [Deployment in Visual C++](../windows/deployment-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
