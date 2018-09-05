---
title: Errore ML irreversibile A1017 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A1017
dev_langs:
- C++
helpviewer_keywords:
- A1017
ms.assetid: bef0b312-5431-4e5a-b637-c19919acf01b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fb98eab68da417526a75beaa57870ce906c85a8d
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43688559"
---
# <a name="ml-fatal-error-a1017"></a>Errore ML irreversibile A1017

**manca un nome di file di origine**

Machine Learning non è riuscito a trovare un file per assemblare o passare al linker.

Questo errore viene generato quando si assegnano le opzioni della riga di comando ML senza specificare un nome di file su cui intervenire. Per assemblare i file che non è un'estensione asm, utilizzare il **/Ta** opzione della riga di comando.

Questo errore può essere generato anche tramite la chiamata ML senza parametri se la variabile di ambiente di Machine Learning contiene le opzioni della riga di comando.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>