---
title: Errore degli strumenti del linker LNK2039
ms.date: 11/04/2016
f1_keywords:
- LNK2039
helpviewer_keywords:
- LNK2039
ms.assetid: eaa296bd-4901-41f6-8410-6d03ee827144
ms.openlocfilehash: 7712747deb865ec62fa007fcd95ad09630d00cea
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194499"
---
# <a name="linker-tools-error-lnk2039"></a>Errore degli strumenti del linker LNK2039

importazione della classe di riferimento '\<Type >' definita in un altro. obj; deve essere importata o definita, ma non entrambe

La classe di riferimento ' <`type`>' viene importata nel file con estensione obj specificato, ma è definita anche in un altro file obj. Questa condizione può provocare un errore di runtime o altri comportamenti imprevisti.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Controllare se '`type`' deve essere definito in un altro file con estensione obj e controllare se deve essere incluso dal file con estensione winmd.

1. Rimuovere la definizione o l'importazione.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)<br/>
[Errore degli strumenti del linker LNK1332](../../error-messages/tool-errors/linker-tools-error-lnk1332.md)
