---
title: -vmm, - vms, - vmv (rappresentazione generale) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /vms
- /vmm
- /vmv
dev_langs:
- C++
helpviewer_keywords:
- Virtual Inheritance compiler option
- general purpose representation compiler options
- vms compiler option [C++]
- vmm compiler option [C++]
- /vmm compiler option [C++]
- -vmm compiler option [C++]
- -vms compiler option [C++]
- /vms compiler option [C++]
- vmv compiler option [C++]
- /vmv compiler option [C++]
- Single Inheritance compiler option
- -vmv compiler option [C++]
ms.assetid: 0fcd7ae0-3031-4c62-a2a8-e154c8685dae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d4e790281cd23ba43987ec6ab003787c115150be
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45701302"
---
# <a name="vmm-vms-vmv-general-purpose-representation"></a>/vmm, /vms, /vmv (Rappresentazione generale)

Quando [/vmb, /vmg (metodo di rappresentazione)](../../build/reference/vmb-vmg-representation-method.md) sia selezionato come il [metodo di rappresentazione](../../build/reference/vmb-vmg-representation-method.md). Queste opzioni indicano il modello di ereditarietà della definizione di classe non ancora specificate.

## <a name="syntax"></a>Sintassi

```
/vmm
/vms
/vmv
```

## <a name="remarks"></a>Note

Le opzioni sono descritte nella tabella riportata di seguito.

|Opzione|Descrizione|
|------------|-----------------|
|**/vmm**|Specifica la rappresentazione più generale di un puntatore a un membro di una classe che utilizza l'ereditarietà multipla.<br /><br /> Corrispondente [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) e l'argomento di [#pragma pointers_to_members](../../preprocessor/pointers-to-members.md) viene **multiple_inheritance**.<br /><br /> Questa rappresentazione è maggiore di quello richiesto per l'ereditarietà singola.<br /><br /> Se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è virtuale, il compilatore genera un errore.|
|**/vms**|Specifica la rappresentazione più generale di un puntatore a un membro di una classe che viene utilizzato alcun ereditarietà o ereditarietà singola.<br /><br /> Corrispondente [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) e l'argomento [#pragma pointers_to_members](../../preprocessor/pointers-to-members.md) viene **dell'ereditarietà singola**.<br /><br /> Questa è la più piccola rappresentazione possibile di un puntatore a un membro di una classe.<br /><br /> Se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è multiplo o virtuale, il compilatore genera un errore.|
|**/vmv**|Specifica la rappresentazione più generale di un puntatore a un membro di una classe che usa l'ereditarietà virtuale. Servizio mai provoca un errore ed è il valore predefinito.<br /><br /> Corrispondente [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) e l'argomento [#pragma pointers_to_members](../../preprocessor/pointers-to-members.md) viene **virtual_inheritance**.<br /><br /> Questa opzione richiede un puntatore di dimensioni maggiori e un codice aggiuntivo per interpretare il puntatore del mouse rispetto alle altre opzioni.|

Quando si specifica una di queste opzioni di modello di ereditarietà, tale modello viene usato per tutti i puntatori ai membri della classe, indipendentemente dal tipo di ereditarietà o se il puntatore viene dichiarato prima o dopo la classe. Pertanto, se si usano sempre classi a ereditarietà singola, è possibile ridurre la dimensione del codice eseguendo la compilazione con **/vms**; tuttavia, se si desidera utilizzare il caso più generale (a scapito della rappresentazione dei dati più grande), eseguire la compilazione con **/vmv**.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[/vmb, /vmg (metodo di rappresentazione)](../../build/reference/vmb-vmg-representation-method.md)
[opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)