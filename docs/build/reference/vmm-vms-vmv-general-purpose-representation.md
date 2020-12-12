---
description: Altre informazioni su:/VMM,/VMS,/vmv (rappresentazione per utilizzo generico)
title: /VMM,-VM,-vmv (rappresentazione per utilizzo generico)
ms.date: 11/04/2016
f1_keywords:
- /vms
- /vmm
- /vmv
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
ms.openlocfilehash: 8c5761a2f51ec9860a4afeb7d4aacbf7f882b3f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257225"
---
# <a name="vmm-vms-vmv-general-purpose-representation"></a>/vmm, /vms, /vmv (Rappresentazione generale)

Utilizzato quando si seleziona [/vmb,/VMG (metodo di rappresentazione)](vmb-vmg-representation-method.md) come [metodo di rappresentazione](vmb-vmg-representation-method.md). Queste opzioni indicano il modello di ereditarietà della definizione di classe non ancora rilevata.

## <a name="syntax"></a>Sintassi

```
/vmm
/vms
/vmv
```

## <a name="remarks"></a>Osservazioni

Le opzioni sono descritte nella tabella riportata di seguito.

|Opzione|Description|
|------------|-----------------|
|**/VMM**|Specifica la rappresentazione più generale di un puntatore a un membro di una classe che utilizza l'ereditarietà multipla.<br /><br /> Viene **multiple_inheritance** la [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) e l'argomento corrispondenti per [#pragma pointers_to_members](../../preprocessor/pointers-to-members.md) .<br /><br /> Questa rappresentazione è più grande del necessario per l'ereditarietà singola.<br /><br /> Se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è virtuale, il compilatore genera un errore.|
|**/VMS**|Specifica la rappresentazione più generale di un puntatore a un membro di una classe che non utilizza ereditarietà o ereditarietà singola.<br /><br /> Viene **single_inheritance** la [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) e l'argomento corrispondenti per [#pragma pointers_to_members](../../preprocessor/pointers-to-members.md) .<br /><br /> Si tratta della rappresentazione più piccola possibile di un puntatore a un membro di una classe.<br /><br /> Se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è più o virtuale, il compilatore genera un errore.|
|**/vmv**|Specifica la rappresentazione più generale di un puntatore a un membro di una classe che utilizza l'ereditarietà virtuale. Non genera mai un errore ed è il valore predefinito.<br /><br /> Viene **virtual_inheritance** la [parola chiave di ereditarietà](../../cpp/inheritance-keywords.md) e l'argomento corrispondenti per [#pragma pointers_to_members](../../preprocessor/pointers-to-members.md) .<br /><br /> Questa opzione richiede un puntatore più grande e codice aggiuntivo per interpretare il puntatore rispetto alle altre opzioni.|

Quando si specifica una di queste opzioni del modello di ereditarietà, il modello viene usato per tutti i puntatori ai membri della classe, indipendentemente dal tipo di ereditarietà o dal fatto che il puntatore venga dichiarato prima o dopo la classe. Se pertanto si utilizzano sempre classi a ereditarietà singola, è possibile ridurre le dimensioni del codice compilando con **/VMS**; Tuttavia, se si desidera utilizzare il caso più generale (a scapito della rappresentazione dei dati più grande), compilare con **/VMV**.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[/VMB,/VMG (metodo di rappresentazione)](vmb-vmg-representation-method.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
