---
title: Identificatori di override (C++/CLI e C++/CX)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- override specifiers, C++
- override specifiers
ms.assetid: 155bbf6f-4722-4654-afb1-9cb52af799fb
ms.openlocfilehash: c1e8e7db2879b0226eaff562f5b5b826bce14caf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65515746"
---
# <a name="override-specifiers--ccli-and-ccx"></a>Identificatori di override (C++/CLI e C++/CX)

Gli *identificatori di override* modificano il comportamento dei tipi ereditati e dei membri dei tipi ereditati nei tipi derivati.

## <a name="all-runtimes"></a>Tutti i runtime

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sugli identificatori di override, vedere:

- [abstract](abstract-cpp-component-extensions.md)

- [new (nuovo slot in vtable)](new-new-slot-in-vtable-cpp-component-extensions.md)

- [override](override-cpp-component-extensions.md)

- [sealed](sealed-cpp-component-extensions.md)

- [Identificatori di override e compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md)

Le parole chiave **abstract** e **sealed** sono valide anche nelle dichiarazioni di tipo, dove non fungono da identificatori di override.

Per informazioni sull'override esplicito di funzioni di classi di base, vedere [Override espliciti](explicit-overrides-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Non esistono note per questa funzionalità del linguaggio che si applichino solo a Common Language Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)