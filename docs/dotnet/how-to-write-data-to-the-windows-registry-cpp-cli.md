---
title: "Procedura: inserire dati nel Registro di sistema di Windows (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Registro di sistema, scrittura"
  - "Visual C++, scrittura nel Registro di sistema di Windows"
ms.assetid: 3d40b978-4baa-4779-bfe3-47e2917b757f
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: inserire dati nel Registro di sistema di Windows (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene utilizzata la chiave <xref:Microsoft.Win32.Registry.CurrentUser> per creare un'istanza scrivibile della classe <xref:Microsoft.Win32.RegistryKey> corrispondente alla chiave **software**.  Viene quindi utilizzato il metodo <xref:Microsoft.Win32.RegistryKey.CreateSubKey%2A> per creare una nuova chiave e aggiungere coppie chiave\/valore.  
  
## Esempio  
  
### Codice  
  
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
  
## Osservazioni  
 È possibile utilizzare .NET Framework per accedere al Registro di sistema con le classi <xref:Microsoft.Win32.Registry> e [RegistryKey](https://msdn.microsoft.com/en-us/library/microsoft.win32.registrykey.aspx), entrambe definite nello spazio dei nomi <xref:Microsoft.Win32>.  La classe **Registro di sistema** è un contenitore per istanze statiche della classe <xref:Microsoft.Win32.RegistryKey>.  Ciascuna istanza rappresenta un nodo radice del Registro di sistema.  Le istanze sono <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine> e <xref:Microsoft.Win32.Registry.Users>.  
  
## Vedere anche  
 [Procedura: leggere i dati dal Registro di sistema di Windows](../dotnet/how-to-read-data-from-the-windows-registry-cpp-cli.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)