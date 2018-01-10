---
title: 'Procedura: scrivere dati nel Registro di sistema di Windows (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- registry, writing to
- Visual C++, writing to Windows Registry
ms.assetid: 3d40b978-4baa-4779-bfe3-47e2917b757f
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f3bd5cedbf3c981964c9d03eb8a30fc5e1652081
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-write-data-to-the-windows-registry-ccli"></a>Procedura: inserire dati nel Registro di sistema di Windows (C++/CLI)
Nell'esempio di codice viene illustrato come utilizzare il <xref:Microsoft.Win32.Registry.CurrentUser> chiave per creare un'istanza scrivibile del <xref:Microsoft.Win32.RegistryKey> classe corrispondente il **Software** chiave. Il <xref:Microsoft.Win32.RegistryKey.CreateSubKey%2A> metodo viene quindi utilizzato per creare una nuova chiave e aggiungere coppie chiave/valore.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
// registry_write.cpp  
// compile with: /clr  
using namespace System;  
using namespace Microsoft::Win32;  
  
int main()  
{  
   // The second OpenSubKey argument indicates that  
   // the subkey should be writable.   
   RegistryKey^ rk;  
   rk  = Registry::CurrentUser->OpenSubKey("Software", true);  
   if (!rk)  
   {  
      Console::WriteLine("Failed to open CurrentUser/Software key");  
      return -1;  
   }  
  
   RegistryKey^ nk = rk->CreateSubKey("NewRegKey");  
   if (!nk)  
   {  
      Console::WriteLine("Failed to create 'NewRegKey'");  
      return -1;  
   }  
  
   String^ newValue = "NewValue";  
   try  
   {  
      nk->SetValue("NewKey", newValue);  
      nk->SetValue("NewKey2", 44);  
   }  
   catch (Exception^)  
   {  
      Console::WriteLine("Failed to set new values in 'NewRegKey'");  
      return -1;  
   }  
  
   Console::WriteLine("New key created.");  
   Console::Write("Use REGEDIT.EXE to verify ");  
   Console::WriteLine("'CURRENTUSER/Software/NewRegKey'\n");  
   return 0;  
}  
```  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare .NET Framework per accedere al registro con il <xref:Microsoft.Win32.Registry> e [RegistryKey](https://msdn.microsoft.com/en-us/library/microsoft.win32.registrykey.aspx) classi, che sono definiscono nel <xref:Microsoft.Win32> dello spazio dei nomi. Il **Registro di sistema** classe è un contenitore per le istanze statiche della <xref:Microsoft.Win32.RegistryKey> classe. Ogni istanza rappresenta un nodo del Registro di sistema radice. Le istanze sono <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, e <xref:Microsoft.Win32.Registry.Users>.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: leggere dati dal Registro di sistema (C + + CLI)](../dotnet/how-to-read-data-from-the-windows-registry-cpp-cli.md)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)