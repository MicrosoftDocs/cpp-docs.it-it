---
description: "Per altre informazioni, vedere Procedura: creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT"
title: "Procedura: creare un'applicazione parzialmente attendibile (C++/CLI)"
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
ms.openlocfilehash: 937262595df4415d5620b60d9ccd8c17a6c44abf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124280"
---
# <a name="how-to-create-a-partially-trusted-application-by-removing-dependency-on-the-crt-library-dll"></a>Procedura: creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT

In questo argomento viene illustrato come creare un'applicazione Common Language Runtime parzialmente attendibile utilizzando Visual C++ rimuovendo la dipendenza da msvcm90.dll.

Un'applicazione Visual C++ compilata con **/CLR** avrà una dipendenza da msvcm90.dll, che fa parte della libreria di runtime C. Quando si desidera che l'applicazione venga utilizzata in un ambiente con attendibilità parziale, il CLR imporrà determinate regole di sicurezza dall'accesso di codice nella DLL. Pertanto, sarà necessario rimuovere questa dipendenza perché msvcm90.dll contiene codice nativo e non è possibile applicare i criteri di sicurezza dall'accesso di codice.

Se l'applicazione non usa alcuna funzionalità della libreria di runtime C e si vuole rimuovere la dipendenza da questa libreria dal codice, sarà necessario usare l'opzione del linker **/NODEFAULTLIB: msvcmrt. lib** e il collegamento a ptrustm. lib o ptrustmd. lib. Queste librerie contengono file oggetto per l'inizializzazione e l'inizializzazione di un'applicazione, le classi di eccezione utilizzate dal codice di inizializzazione e il codice di gestione delle eccezioni gestite. Il collegamento in una di queste librerie eliminerà qualsiasi dipendenza dal msvcm90.dll.

> [!NOTE]
> L'ordine di inizializzazione dell'assembly potrebbe essere diverso per le applicazioni che usano le librerie ptrust. Per le applicazioni normali, gli assembly vengono in genere scaricati nell'ordine inverso rispetto al caricamento, ma ciò non è garantito. Per le applicazioni con attendibilità parziale, gli assembly vengono in genere scaricati nello stesso ordine in cui vengono caricati. Questo, inoltre, non è garantito.

### <a name="to-create-a-partially-trusted-mixed-clr-application"></a>Per creare un'applicazione mista (/CLR) parzialmente attendibile

1. Per rimuovere la dipendenza da msvcm90.dll, è necessario specificare al linker di non includere questa libreria utilizzando l'opzione del linker **/NODEFAULTLIB: msvcmrt. lib** . Per informazioni su come eseguire questa operazione usando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [/NODEFAULTLIB (Ignora librerie)](../build/reference/nodefaultlib-ignore-libraries.md).

1. Aggiungere una delle librerie ptrustm alle dipendenze di input del linker. Usare ptrustm. lib se si compila l'applicazione in modalità di rilascio. Per la modalità di debug, utilizzare ptrustmd. lib. Per informazioni su come eseguire questa operazione utilizzando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [. File lib come input del linker](../build/reference/dot-lib-files-as-linker-input.md).

## <a name="see-also"></a>Vedi anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)<br/>
[Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)<br/>
[Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)<br/>
[/link (passa opzioni al linker)](../build/reference/link-pass-options-to-linker.md)
