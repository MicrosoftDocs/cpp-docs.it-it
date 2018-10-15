---
title: Platform, default e cli gli spazi dei nomi (C + c++ /CLI e c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- lang
- cli
dev_langs:
- C++
helpviewer_keywords:
- lang namespace
- cli namespace
ms.assetid: 9d38bd1e-dc78-47d1-a84b-9b4683e52c9c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a70fb5317f42e98ccddb21fe66e328e1cc6f7643
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328025"
---
# <a name="platform-default-and-cli-namespaces--ccli-and-ccx"></a>Platform, default e cli gli spazi dei nomi (C + c++ /CLI e c++ /CX)

Uno spazio dei nomi qualifica i nomi di un elemento del linguaggio in modo che i nomi non siano in conflitto con nomi identici nel codice sorgente. Ad esempio, un conflitto di nomi può impedire al compilatore riconoscere [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md). Gli spazi dei nomi vengono utilizzati dal compilatore, ma non vengono mantenuti nell'assembly compilato.

## <a name="all-runtimes"></a>Tutti i runtime

Visual Studio offre uno spazio dei nomi predefinito per il progetto quando si crea il progetto. È possibile rinominare manualmente lo spazio dei nomi, anche se in C + + c++ /CX il nome del file con estensione winmd deve corrispondere al nome dello spazio dei nomi radice.

## <a name="windows-runtime"></a>Windows Runtime

Per altre informazioni, vedere [spazi dei nomi e visibilità del tipo (C + c++ /CX)](https://msdn.microsoft.com/library/windows/apps/hh969551.aspx).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

### <a name="syntax"></a>Sintassi

```cpp
using namespace cli;
```

### <a name="remarks"></a>Note

C + + / CLI supporta il **cli** dello spazio dei nomi. Durante la compilazione con `/clr`, il **usando** istruzione nella sezione relativa alla sintassi è implicita.

Le seguenti funzionalità del linguaggio sono nel **cli** dello spazio dei nomi:

- [Matrici](../windows/arrays-cpp-component-extensions.md)

- [interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)

- [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)

- [safe_cast](../windows/safe-cast-cpp-component-extensions.md)

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Esempio di codice seguente viene illustrato che è possibile utilizzare un simbolo nel **cli** dello spazio dei nomi come simbolo definito dall'utente nel codice.  Tuttavia, dopo avere eseguito questa operazione, sarà necessario qualificare in modo esplicito o implicito i riferimenti al **cli** elemento di linguaggio lo stesso nome.

```cpp
// cli_namespace.cpp
// compile with: /clr
using namespace cli;
int main() {
   array<int> ^ MyArray = gcnew array<int>(100);
   int array = 0;

   array<int> ^ MyArray2 = gcnew array<int>(100);   // C2062

   // OK
   cli::array<int> ^ MyArray2 = gcnew cli::array<int>(100);
   ::array<int> ^ MyArray3 = gcnew ::array<int>(100);
}
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](../windows/component-extensions-for-runtime-platforms.md)