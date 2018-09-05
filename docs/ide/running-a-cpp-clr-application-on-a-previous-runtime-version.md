---
title: Esecuzione di un'applicazione C++ /clr in una versione runtime precedente
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- applications [C++], runtime version specified
- versions [C++]
- app.config files, runtime version specified
- compatibility [C++], runtime version specified
- backward compatibility [C++], runtime version specified
- application deployment [C++], runtime version specified
- common language runtime [C++], version specified
- deploying applications [C++], runtime version specified
ms.assetid: 940171b7-6937-4b14-8e87-c199e23f4f2e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6510f7f3bd9a88f4b938d2646bad6750fe310def
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43688747"
---
# <a name="running-a-c-clr-application-on-a-previous-runtime-version"></a>Esecuzione di un'applicazione /clr C++ su una versione runtime precedente
Se non diversamente specificato, un'applicazione C++ .NET Framework è compilata per l'esecuzione con la versione di Common Language Runtime (CLR) usata dal compilatore per compilare l'applicazione stessa. È tuttavia possibile eseguire un'applicazione con estensione exe compilata per una versione del runtime con qualsiasi altra versione che offra le funzionalità necessarie.  
  
 A tale scopo, fornire un file app.config contenente informazioni sulla versione del runtime nel tag `supportedRuntime`.  
  
 Al momento dell'esecuzione, il file app.config deve avere un nome nel formato *nomefile.est*.config, dove *nomefile.est* è il nome del file eseguibile che ha avviato l'applicazione, e deve essere nella stessa directory del file eseguibile. Se ad esempio il nome dell'applicazione è TestApp.exe, il nome del file app.config deve essere TestApp.exe.config.  
  
 Se si specificano più versione di runtime e l'applicazione viene eseguita in un computer in cui sono installate più versioni di runtime, l'applicazione usa la prima versione specificata nel file di configurazione e installata.  
  
## <a name="see-also"></a>Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)