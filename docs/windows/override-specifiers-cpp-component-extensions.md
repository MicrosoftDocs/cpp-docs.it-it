---
title: Identificatori di override (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- override specifiers, C++
- override specifiers
ms.assetid: 155bbf6f-4722-4654-afb1-9cb52af799fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0620bc7045dcb312667cfdfe670e1f19b0545cf2
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49327464"
---
# <a name="override-specifiers--ccli-and-ccx"></a>Identificatori di override (C + c++ /CLI e c++ /CX)

*Identificatori di override* modificare tipi come ereditati e i membri di tipi ereditati si comportano nei tipi derivati.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Note

Per ulteriori informazioni sugli identificatori di override, vedere:

- [abstract](../windows/abstract-cpp-component-extensions.md)

- [New (nuovo slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)

- [override](../windows/override-cpp-component-extensions.md)

- [sealed](../windows/sealed-cpp-component-extensions.md)

- [Gli identificatori di override e compilazioni Native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md)

**astratto** e **sealed** sono validi anche in dichiarazioni di tipo, in cui non vengono utilizzati come identificatori di override.

Per informazioni sull'override esplicito delle funzioni della classe base, vedere [esegue l'override esplicito](../windows/explicit-overrides-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)