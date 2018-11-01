---
title: Assembly con nome sicuro (firma degli assembly) (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- assemblies [C++]
- signing assemblies
- .NET Framework [C++], assembly signing
- assemblies [C++], signing
- linker [C++], assembly signing
- strong-named assemblies [C++]
ms.assetid: c337cd3f-e5dd-4c6f-a1ad-437e85dba1cc
ms.openlocfilehash: c23c3b70a2152fbceb771e085b73d7daf7aa3c2a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50527556"
---
# <a name="strong-name-assemblies-assembly-signing-ccli"></a>Assembly con nome sicuro (firma degli assembly) (C++/CLI)

Questo argomento viene illustrato come è possibile firmare l'assembly, noto anche come assegnazione un nome sicuro all'assembly.

## <a name="remarks"></a>Note

Quando si usa Visual C++, usare le opzioni del linker per firmare l'assembly per evitare problemi relativi agli attributi CLR per la firma dell'assembly:

- <xref:System.Reflection.AssemblyDelaySignAttribute>

- <xref:System.Reflection.AssemblyKeyFileAttribute>

- <xref:System.Reflection.AssemblyKeyNameAttribute>

I motivi per non utilizzare gli attributi includono il fatto che il nome della chiave è visibile nei metadati dell'assembly, che possono rappresentare un rischio di sicurezza se il nome del file contiene informazioni riservate. Inoltre, il processo di compilazione utilizzato dall'ambiente di sviluppo di Visual C++ invalida la chiave con cui l'assembly è firmato se si usano attributi CLR per assegnare un nome sicuro all'assembly e quindi eseguirà uno strumento di post-elaborazione, ad esempio mt.exe nell'assembly.

Se si compilazione dalla riga di comando, usano le opzioni del linker per firmare l'assembly e quindi eseguirà uno strumento di post-elaborazione (ad esempio mt.exe), è necessario firmare nuovamente l'assembly con sn.exe. In alternativa, è possibile compilare e ritardare la firma dell'assembly e dopo l'esecuzione di strumenti di post-elaborazione, completare la firma.

Se si usano gli attributi della firma durante la compilazione nell'ambiente di sviluppo, è possibile effettuare l'accesso all'assembly in modo esplicito chiamando sn.exe ([Sn.exe (Strong Name Tool)](/dotnet/framework/tools/sn-exe-strong-name-tool)) in un evento di post-compilazione. Per altre informazioni, vedere [Specifica di eventi di compilazione](../ide/specifying-build-events.md). Tempi di compilazione possono essere inferiore se si usano gli attributi e un evento di post-compilazione, rispetto alle opzioni del linker.

Le seguenti opzioni del linker supportano la firma degli assembly:

- [/DELAYSIGN (firma parzialmente un assembly)](../build/reference/delaysign-partially-sign-an-assembly.md)

- [/KEYFILE (specifica una chiave o una coppia di chiavi per firmare un assembly)](../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER (specifica un contenitore di chiavi per firmare un assembly)](../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)

Per altre informazioni su assembly con nome sicuro, vedere [creazione e assembly con nome sicuro](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies).

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)