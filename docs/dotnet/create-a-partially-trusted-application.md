---
title: "Procedura: Creare un'applicazione parzialmente attendibile (C + + CLI)"
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
ms.openlocfilehash: afdfb8ca11753d7def9d7da6f431082b1a90c345
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57743755"
---
# <a name="how-to-create-a-partially-trusted-application-by-removing-dependency-on-the-crt-library-dll"></a>Procedura: Creare un'applicazione parzialmente attendibile rimuovendo la dipendenza la DLL della libreria CRT

In questo argomento illustra come creare un'applicazione parzialmente attendibile di Common Language Runtime con Visual C++ rimuovendo la dipendenza msvcm90.

Un'applicazione Visual C++ compilata con **/clr** avranno una dipendenza msvcm90, che fa parte della libreria di Runtime C. Quando si desidera che l'applicazione da usare in un ambiente parzialmente attendibile, il CLR impone alcune regole di sicurezza di accesso di codice alla DLL. Pertanto, sarà necessario rimuovere questa dipendenza, poiché msvcm90 contiene il codice nativo e non è possibile applicare criteri di sicurezza di accesso di codice su di esso.

Se l'applicazione non usa alcuna funzionalità della libreria di Runtime C e si vuole rimuovere la dipendenza da questa raccolta dal codice, si dovrà usare il **/NODEFAULTLIB:msvcmrt.lib** l'opzione del linker e collegarsi alla è possibile eseguire o ptrustmd. Queste librerie contengono i file oggetto per l'inizializzazione e l'annullamento di un'applicazione, le classi di eccezioni usato dal codice di inizializzazione e la gestione delle eccezioni gestite. Il collegamento a una di queste librerie rimuoverà tutte le dipendenze msvcm90.

> [!NOTE]
>  L'ordine di annullamento dell'inizializzazione di assembly potrebbero essere diversi per le applicazioni che usano le librerie ptrust. Per le applicazioni normali, gli assembly vengono in genere scaricati nell'ordine inverso in cui sono stati caricati, ma non è garantita. Per le applicazioni parzialmente attendibili, gli assembly vengono in genere scaricati nello stesso ordine in cui vengono caricati. Questa operazione, inoltre, non è garantita.

### <a name="to-create-a-partially-trusted-mixed-clr-application"></a>Per creare un'attendibilità parziale mista (/ Common Language Runtime) dell'applicazione

1. Per rimuovere la dipendenza msvcm90, è necessario specificare al linker di non includere questa libreria usando la **/NODEFAULTLIB:msvcmrt.lib** l'opzione del linker. Per informazioni su come eseguire questa operazione usando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [/NODEFAULTLIB (Ignore Libraries)](../build/reference/nodefaultlib-ignore-libraries.md).

1. Aggiungere una delle librerie di ptrustm per le dipendenze di input del linker. Usare eseguire se si compila l'applicazione in modalità di rilascio. Per la modalità di debug, usare ptrustmd. Per informazioni su come eseguire questa operazione usando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [. File LIB come Input del Linker](../build/reference/dot-lib-files-as-linker-input.md).

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)<br/>
[Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)<br/>
[Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)<br/>
[/link (passa opzioni al linker)](../build/reference/link-pass-options-to-linker.md)
