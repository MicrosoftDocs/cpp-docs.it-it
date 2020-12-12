---
description: 'Altre informazioni su: Proprietà istruzione di compilazione personalizzata (Linux C++)'
title: Proprietà Istruzione di compilazione personalizzata (Linux C++)
ms.date: 06/07/2019
ms.assetid: 77a9c1fb-7c41-4a9b-9418-18ac17ce4e74
ms.openlocfilehash: d8a120d147d107cd96f77556a412aa8ee6636548
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169775"
---
# <a name="custom-build-step-properties-linux-c"></a>Proprietà Istruzione di compilazione personalizzata (Linux C++)

::: moniker range="msvc-140"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=msvc-150"

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Comando da eseguire tramite l'istruzione di compilazione personalizzata. |
| Description | Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata. |
| Output | File di output che viene generato dall'istruzione di compilazione personalizzata. Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali. |
| Dipendenze aggiuntive | Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata. |
| Esegui dopo ed Esegui prima | Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate. Le destinazioni più comunemente elencate sono BuildGenerateSources, BuildCompile e BuildLink perché rappresentano le istruzioni principali nel processo di compilazione. Altre destinazioni elencate spesso sono Midl, CLCompile e Link. |
| Considera output come contenuto | Questa opzione è significativa solo per le app Microsoft Store o Windows Phone i cui file di contenuto sono tutti inclusi nel pacchetto appx. |

::: moniker-end
