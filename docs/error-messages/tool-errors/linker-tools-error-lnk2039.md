---
title: Errore degli strumenti del linker LNK2039
ms.date: 11/04/2016
f1_keywords:
- LNK2039
helpviewer_keywords:
- LNK2039
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
ms.openlocfilehash: 57d0c101358f84816c8d0cf96eb5137833df0b48
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027559"
---
# <a name="linker-tools-error-lnk2039"></a>Errore degli strumenti del linker LNK2039

l'importazione della classe ref\<tipo >' definita in another, che dovrebbe essere presente importati o definito, ma non entrambi

La classe di riferimento ' <`type`>' viene importato nel file con estensione obj spacificto ma viene anche definita in un altro file con estensione obj. Questa condizione può provocare un errore di runtime o altri comportamenti imprevisti.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Controllare se '`type`' deve essere definito in un altro file con estensione obj e controllare se deve essere incluso dal file con estensione winmd.

1. Rimuovere la definizione o l'importazione.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi degli strumenti del linker](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)<br/>
[Errore degli strumenti del linker LNK1332](../../error-messages/tool-errors/linker-tools-error-lnk1332.md)