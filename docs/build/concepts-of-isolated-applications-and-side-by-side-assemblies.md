---
title: Concetti di applicazioni isolate e assembly side-by-side
ms.date: 11/04/2016
helpviewer_keywords:
- side-by-side assemblies [C++]
- isolated assemblies [C++]
ms.assetid: 945a885f-cb3e-4c8a-a0b9-2c2e3e02cc50
ms.openlocfilehash: 61da61b4a213c01ca66e8978c78622fe8b2818d1
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57817582"
---
# <a name="concepts-of-isolated-applications-and-side-by-side-assemblies"></a>Concetti di applicazioni isolate e assembly side-by-side

Un'applicazione è considerata un' [applicazione isolata](/windows/desktop/SbsCs/isolated-applications) se tutti i suoi componenti sono [assembly side-by-side](/windows/desktop/SbsCs/about-side-by-side-assemblies-). Un assembly affiancato è una raccolta di risorse, ovvero un gruppo di DLL, classi Windows, server COM, librerie di tipi o interfacce, distribuite insieme e rese disponibili a un'applicazione affinché vengano utilizzate in fase di esecuzione. In genere, un assembly side-by-side è costituito da una o più DLL.

## <a name="shared-or-private"></a>Assembly condiviso o privato

Un assembly side-by-side può essere condiviso o privato. Gli[assembly affiancati condivisi](https://msdn.microsoft.com/library/aa375996.aspx) possono essere usati da più applicazioni nei cui manifesti è specificata una dipendenza dall'assembly. Più versioni di un assembly affiancato sono condivisibili da applicazioni diverse eseguite contemporaneamente. Un [assembly privato](/windows/desktop/SbsCs/about-private-assemblies-) è un assembly distribuito insieme a un'applicazione per l'utilizzo esclusivo da parte di tale applicazione. Gli assembly privati vengono installati nella cartella che contiene il file eseguibile dell'applicazione o in una delle relative sottocartelle.

## <a name="manifests-and-search-order"></a>Manifesti e ordine di ricerca

Le applicazioni isolate e gli assembly affiancati sono descritti dai [manifesti](/windows/desktop/sbscs/manifests). Un manifesto è un file XML che può essere esterno o incorporato in un'applicazione o in un assembly come risorsa. Il file manifesto di un'applicazione isolata viene utilizzato per gestire i nomi e le versioni di assembly side-by-side condivisi a cui l'applicazione deve essere associata in fase di esecuzione. Nel manifesto di un assembly side-by-side vengono specificati i nomi, le versioni, le risorse e gli assembly dipendenti degli assembly side-by-side. Nel caso di un assembly affiancato condiviso, il manifesto viene installato nella cartella %WINDIR%\WinSxS\Manifests\. Nel caso di un assembly privato, è consigliabile includere il manifesto nella DLL come risorsa con ID uguale a 1. È inoltre possibile assegnare all'assembly privato lo stesso nome della DLL. Per altre informazioni, vedere [sull'assembly privati](/windows/desktop/SbsCs/about-private-assemblies-).

In fase di esecuzione, Windows utilizza le informazioni sull'assembly contenute nel manifesto dell'applicazione per cercare e caricare l'assembly affiancato corrispondente. Se un'applicazione isolata specifica una dipendenza da un assembly, il sistema operativo cerca l'assembly prima tra quelli condivisi nella cache di assembly nativi nella cartella %WINDIR%\WinSxS\. Se non trova l'assembly richiesto, il sistema operativo cerca un assembly privato in una cartella della struttura di directory dell'applicazione. Per altre informazioni, vedere [Assembly Searching Sequence](/windows/desktop/SbsCs/assembly-searching-sequence)(Sequenza di ricerca dell'assembly).

## <a name="changing-dependencies"></a>Modifica delle dipendenze

È possibile modificare le dipendenze dell'assembly affiancato dopo la distribuzione dell'applicazione modificando i [file di configurazione dell'editore](/windows/desktop/SbsCs/publisher-configuration-files) e i [file di configurazione dell'applicazione](/windows/desktop/SbsCs/application-configuration-files). Un file di configurazione dell'editore, noto anche come file dei criteri dell'editore, è un file XML che reindirizza a livello globale le applicazioni e gli assembly da una versione di un assembly affiancato a un'altra versione dello stesso assembly. È ad esempio possibile modificare una dipendenza quando viene distribuita una correzione rapida per la sicurezza per un assembly affiancato e si desidera reindirizzare tutte le applicazioni alla versione corretta. Un file di configurazione dell'applicazione è un file XML che reindirizza un'applicazione specifica da una versione di un assembly affiancato a un'altra versione dello stesso assembly. È possibile utilizzare un file di configurazione dell'applicazione per reindirizzare un'applicazione specifica a una versione di un assembly affiancato diversa da quella definita nel file di configurazione dell'editore. Per altre informazioni, vedere [Configurazione](/windows/desktop/SbsCs/configuration).

## <a name="visual-c-libraries"></a>Librerie di Visual C++

In Visual Studio 2005 e Visual Studio 2008 le librerie ridistribuibili come ATL, MFC, CRT, C++ standard, OpenMP e MSDIA vengono distribuite come assembly affiancati condivisi nella cache degli assembly nativi. Nella versione corrente le librerie ridistribuibili utilizzano la distribuzione centrale. Per impostazione predefinita, tutte le applicazioni compilate utilizzando Visual C++ vengono compilate con il manifesto incorporato nel file binario finale e il manifesto descrive le dipendenze del file binario nelle librerie di Visual C++. Per informazioni dettagliate sulla generazione del manifesto per le applicazioni Visual C++, vedere [Understanding Manifest Generation for C/C++ Programs](understanding-manifest-generation-for-c-cpp-programs.md) Un manifesto non è necessario per le applicazioni collegate staticamente alle librerie che utilizzano o che utilizzano la distribuzione locale. Per altre informazioni sulla distribuzione, vedere [Deployment in Visual C++](../ide/deployment-in-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
