---
title: Assembly con nome sicuro (firma degli Assembly) (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- assemblies [C++]
- signing assemblies
- .NET Framework [C++], assembly signing
- assemblies [C++], signing
- linker [C++], assembly signing
- strong-named assemblies [C++]
ms.assetid: c337cd3f-e5dd-4c6f-a1ad-437e85dba1cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 5d7ae911d2572a35ee8dbb21d5484b4679b64c4d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33169192"
---
# <a name="strong-name-assemblies-assembly-signing-ccli"></a>Assembly con nome sicuro (firma degli assembly) (C++/CLI)
In questo argomento viene illustrato come è possibile firmare l'assembly, noto anche come l'assegnazione di un nome sicuro dell'assembly.  
  
## <a name="remarks"></a>Note  
 Quando si utilizza Visual C++, utilizzare le opzioni del linker per firmare l'assembly per evitare problemi relativi agli attributi CLR per la firma dell'assembly:  
  
-   <xref:System.Reflection.AssemblyDelaySignAttribute>  
  
-   <xref:System.Reflection.AssemblyKeyFileAttribute>  
  
-   <xref:System.Reflection.AssemblyKeyNameAttribute>  
  
 Motivi per non utilizzare gli attributi includono il fatto che il nome della chiave è visibile nei metadati dell'assembly, che possono rappresentare un rischio per la sicurezza se il nome del file contiene informazioni riservate. Inoltre, il processo di compilazione utilizzato dall'ambiente di sviluppo di Visual C++ invaliderà la chiave con cui l'assembly viene firmato se si utilizzano attributi CLR per assegnare un nome sicuro di un assembly e quindi uno strumento di post-elaborazione come mt.exe nell'assembly.  
  
 Se la compilazione dalla riga di comando, utilizzare le opzioni del linker per firmare l'assembly e quindi eseguire uno strumento di post-elaborazione (ad esempio mt.exe), è necessario firmare nuovamente l'assembly con sn.exe. In alternativa, è possibile compilare e ritardare la firma dell'assembly e dopo l'esecuzione di strumenti di post-elaborazione, completare la firma.  
  
 Se si utilizzano gli attributi della firma durante la compilazione nell'ambiente di sviluppo, è possibile firmare l'assembly chiamando in modo esplicito sn.exe ([Sn.exe (strumento nome sicuro)](/dotnet/framework/tools/sn-exe-strong-name-tool)) in un evento di post-compilazione. Per ulteriori informazioni, vedere [specificare eventi di compilazione](../ide/specifying-build-events.md). Se si utilizza gli attributi e un evento di post-compilazione, rispetto alle opzioni del linker, tempi di compilazione possono essere inferiore.  
  
 Le seguenti opzioni del linker supportano la firma degli assembly:  
  
-   [/DELAYSIGN (firma parzialmente un assembly)](../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [/KEYFILE (specifica una chiave o una coppia di chiavi per firmare un assembly)](../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [/KEYCONTAINER (specifica un contenitore di chiavi per firmare un assembly)](../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
 Per ulteriori informazioni sull'assembly con nome sicuro, vedere [creazione e uso degli assembly](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies).  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)