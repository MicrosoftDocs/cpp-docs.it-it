---
title: Variabili di ambiente LINK | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- link
dev_langs:
- C++
helpviewer_keywords:
- variables, environment
- LINK tool [C++], environment variables
- LIB environment variable
- environment variables [C++], LINK
ms.assetid: 9a3d3291-0cc4-4a7d-9d50-80e351b90708
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e88ac63ace95ac0b9874dc3376210f3f5b4af320
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716653"
---
# <a name="link-environment-variables"></a>Variabili di ambiente LINK

Lo strumento LINK usa le seguenti variabili di ambiente:

- COLLEGAMENTO e \_collegamento\_, se definito. Lo strumento LINK antepone le opzioni e gli argomenti definiti nella variabile di ambiente LINK e accoda le opzioni e gli argomenti definiti nel \_collegamento\_ variabile di ambiente per gli argomenti della riga di comando prima dell'elaborazione.

- LIB, se definito. Lo strumento LINK Usa il percorso LIB durante la ricerca di un oggetto, raccolta o altri file specificati nella riga di comando o tramite il [/base](../../build/reference/base-base-address.md) opzione. Usa il percorso LIB anche per trovare un file PDB denominato in un oggetto. La variabile LIB può contenere uno o più specifiche di percorso, separate da punti e virgola. Un percorso deve puntare alla sottodirectory \lib dell'installazione di Visual C++.

- PATH, se lo strumento deve eseguire CVTRES e non riesce a trovare il file nella stessa directory di LINK. CVTRES è necessario a LINK per collegare un file res. PATH deve puntare alla sottodirectory \bin dell'installazione di Visual C++.

- TMP, per specificare una directory quando si collegano file OMF o res.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[Compilare codice C/C++ nella riga di comando](../../build/building-on-the-command-line.md)<br/>
[Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md)
