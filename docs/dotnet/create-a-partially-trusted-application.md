---
title: "Procedura: creare un'applicazione parzialmente attendibile (C"
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- partially trusted applications [C++]
- mixed assemblies [C++], partially trusted applications
- msvcm90[d].dll
- interoperability [C++], partially trusted applications
- interop [C++], partially trusted applications
- /clr compiler option [C++], partially trusted applications
ms.assetid: 4760cd0c-4227-4f23-a7fb-d25b51bf246e
ms.openlocfilehash: 9df3a751f4073472b9495425599aaf43878db99a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364396"
---
# <a name="how-to-create-a-partially-trusted-application-by-removing-dependency-on-the-crt-library-dll"></a>Procedura: creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT

In questo argomento viene illustrato come creare un'applicazione Common Language Runtime parzialmente attendibile utilizzando Visual C , rimuovendo la dipendenza da msvcm90.dll.

Una dipendenza da msvcm90.dll, che fa parte della libreria di runtime di C, verrà creata un'applicazione di Visual C. **/clr** Quando si desidera che l'applicazione venga utilizzata in un ambiente parzialmente attendibile, CLR applicherà determinate regole di sicurezza dall'accesso di codice alla DLL. Pertanto, sarà necessario rimuovere questa dipendenza perché msvcm90.dll contiene codice nativo e i criteri di sicurezza dall'accesso di codice non possono essere applicati ad essa.

Se l'applicazione non utilizza alcuna funzionalità della libreria di runtime C e si desidera rimuovere la dipendenza da questa libreria dal codice, sarà necessario utilizzare l'opzione del linker **/NODEFAULTLIB:msvcmrt.lib** e collegarsi con ptrustm.lib o ptrustmd.lib. Queste librerie contengono file oggetto per l'inizializzazione e l'annullamento dell'inizializzazione di un'applicazione, le classi di eccezione utilizzate dal codice di inizializzazione e il codice di gestione delle eccezioni gestito. Il collegamento in una di queste librerie rimuoverà qualsiasi dipendenza da msvcm90.dll.

> [!NOTE]
> L'ordine di annullamento dell'inizializzazione dell'assembly potrebbe essere diverso per le applicazioni che utilizzano le librerie ptrust. Per le applicazioni normali, gli assembly vengono in genere scaricati nell'ordine inverso in cui vengono caricati, ma ciò non è garantito. Per le applicazioni parzialmente attendibili, gli assembly vengono in genere scaricati nello stesso ordine in cui vengono caricati. Questo, inoltre, non è garantito.

### <a name="to-create-a-partially-trusted-mixed-clr-application"></a>Per creare un'applicazione mista parzialmente attendibile (/clr)To create a partially trusted mixed (/clr) application

1. Per rimuovere la dipendenza da msvcm90.dll, è necessario specificare al linker di non includere questa libreria utilizzando l'opzione del linker **/NODEFAULTLIB:msvcmrt.lib.** Per informazioni su come eseguire questa operazione utilizzando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [/NODEFAULTLIB (Ignora librerie)](../build/reference/nodefaultlib-ignore-libraries.md).

1. Aggiungere una delle librerie ptrustm alle dipendenze di input del linker. Utilizzare ptrustm.lib se si compila l'applicazione in modalità di rilascio. Per la modalità di debug, utilizzare ptrustmd.lib.For debug mode, use ptrustmd.lib. Per informazioni su come eseguire questa operazione utilizzando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [. File Lib come input del linker](../build/reference/dot-lib-files-as-linker-input.md).

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)<br/>
[Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)<br/>
[Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)<br/>
[/link (passaggio delle opzioni al linker)](../build/reference/link-pass-options-to-linker.md)
