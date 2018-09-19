---
title: Strumenti del linker LNK2039 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2039
dev_langs:
- C++
helpviewer_keywords:
- LNK2039
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ac4fdde90911427a1a193bfb6f3a950a7bdcf180
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46081793"
---
# <a name="linker-tools-error-lnk2039"></a>Errore degli strumenti del linker LNK2039

l'importazione della classe ref\<tipo >' definita in another, che dovrebbe essere presente importati o definito, ma non entrambi

La classe di riferimento ' <`type`>' viene importato nel file con estensione obj spacificto ma viene anche definita in un altro file con estensione obj. Questa condizione può provocare un errore di runtime o altri comportamenti imprevisti.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Controllare se '`type`' deve essere definito in un altro file con estensione obj e controllare se deve essere incluso dal file con estensione winmd.

1. Rimuovere la definizione o l'importazione.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)<br/>
[Errore degli strumenti del linker LNK1332](../../error-messages/tool-errors/linker-tools-error-lnk1332.md)