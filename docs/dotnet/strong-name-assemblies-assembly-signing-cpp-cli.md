---
description: 'Altre informazioni su: assembly con nome sicuro (firma degli assembly) (C++/CLI)'
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
ms.openlocfilehash: 9fc08df759fa384ed13dbe3d8c3eb2d843183517
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335319"
---
# <a name="strong-name-assemblies-assembly-signing-ccli"></a>Assembly con nome sicuro (firma degli assembly) (C++/CLI)

In questo argomento viene illustrato come è possibile firmare l'assembly, spesso indicato come assegnare un nome sicuro all'assembly.

## <a name="remarks"></a>Commenti

Quando si usa Visual C++, usare le opzioni del linker per firmare l'assembly per evitare problemi correlati agli attributi CLR per la firma degli assembly:

- <xref:System.Reflection.AssemblyDelaySignAttribute>

- <xref:System.Reflection.AssemblyKeyFileAttribute>

- <xref:System.Reflection.AssemblyKeyNameAttribute>

I motivi per non usare gli attributi includono il fatto che il nome della chiave è visibile nei metadati dell'assembly, che può costituire un rischio per la sicurezza se il nome del file include informazioni riservate. Inoltre, il processo di compilazione usato dall'ambiente di sviluppo Visual C++ invalida la chiave con cui l'assembly è firmato se si usano gli attributi CLR per assegnare a un assembly un nome sicuro, quindi si esegue uno strumento di post-elaborazione come mt.exe nell'assembly.

Se si compila dalla riga di comando, usare le opzioni del linker per firmare l'assembly e quindi eseguire uno strumento di post-elaborazione, ad esempio mt.exe, sarà necessario firmare di nuovo l'assembly con sn.exe. In alternativa, è possibile compilare e ritardare la firma dell'assembly e dopo l'esecuzione degli strumenti di post-elaborazione, completare la firma.

Se si usano gli attributi di firma durante la compilazione nell'ambiente di sviluppo, è possibile firmare correttamente l'assembly chiamando in modo esplicito sn.exe ([Sn.exe (strumento nome sicuro)](/dotnet/framework/tools/sn-exe-strong-name-tool)in un evento di post-compilazione. Per altre informazioni, vedere [Specifica di eventi di compilazione](../build/specifying-build-events.md). I tempi di compilazione possono essere minori se si usano attributi e un evento di post-compilazione, rispetto all'uso di opzioni del linker.

Le opzioni del linker seguenti supportano la firma degli assembly:

- [/DELAYSIGN (firma parzialmente un assembly)](../build/reference/delaysign-partially-sign-an-assembly.md)

- [/KEYFILE (specifica la chiave o la coppia di chiavi per firmare un assembly)](../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER (specifica un contenitore di chiavi per la firma di un assembly)](../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)

Per altre informazioni sugli assembly sicuri, vedere [creazione e uso di assembly Strong-Named](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies).

## <a name="see-also"></a>Vedi anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
