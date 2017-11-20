---
title: Implementare un'architettura plug-in (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- plug-ins [C++]
- reflection [C++}, plug-ins
ms.assetid: 4f31e42b-78d1-48b9-8fdc-f28c75e8e77e
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8d959702a7de8df9d90ca6dd855725901543dc92
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-implement-a-plug-in-component-architecture-using-reflection-ccli"></a>Procedura: implementare un'architettura plug-in tramite reflection (C++/CLI)
Gli esempi di codice seguenti illustrano l'uso della reflection per implementare una semplice architettura "plug-in". Il primo listato è l'applicazione e il secondo è il plug-in. L'applicazione è un form che vengono inserite automaticamente utilizzando le eventuali classi basate su form trovate nella DLL del plug-in fornita come argomento della riga di comando.  
  
 L'applicazione tenta di caricare l'assembly specificato utilizzando il <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> metodo. Se ha esito positivo, i tipi all'interno dell'assembly vengono enumerati utilizzando il <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=fullName> metodo. Ogni tipo viene quindi verificata la compatibilità con le <xref:System.Type.IsAssignableFrom%2A?displayProperty=fullName> metodo. In questo esempio, le classi dell'assembly specificato devono essere derivate dalla <xref:System.Windows.Forms.Form> classe per essere considerata un plug-in.  
  
 Vengono quindi creata un'istanza delle classi compatibile con il <xref:System.Activator.CreateInstance%2A?displayProperty=fullName> metodo che accetta un <xref:System.Type> come argomento e restituisce un puntatore a una nuova istanza. Ogni nuova istanza viene quindi associato al form e visualizzato.  
  
 Si noti che il <xref:System.Reflection.Assembly.Load%2A> metodo non accetta i nomi di assembly che includono l'estensione di file. La funzione principale dell'applicazione elimina le eventuali estensioni fornite, in modo l'esempio di codice seguente funziona in entrambi i casi.  
  
## <a name="example"></a>Esempio  
 Il codice seguente definisce l'applicazione che accetta i plug-in. Come primo argomento, è necessario specificare un nome di assembly. Questo assembly deve contenere almeno una pubblica <xref:System.Windows.Forms.Form> tipo derivato.  
  
```  
// plugin_application.cpp  
// compile with: /clr /c  
#using <system.dll>  
#using <system.drawing.dll>  
#using <system.windows.forms.dll>  
  
using namespace System;  
using namespace System::Windows::Forms;  
using namespace System::Reflection;  
  
ref class PluggableForm : public Form  {  
public:  
   PluggableForm() {}  
   PluggableForm(Assembly^ plugAssembly) {  
      Text = "plug-in example";  
      Size = Drawing::Size(400, 400);  
      IsMdiContainer = true;  
  
      array<Type^>^ types = plugAssembly->GetTypes( );  
      Type^ formType = Form::typeid;  
  
      for (int i = 0 ; i < types->Length ; i++) {  
         if (formType->IsAssignableFrom(types[i])) {  
            // Create an instance given the type description.  
            Form^ f = dynamic_cast<Form^> (Activator::CreateInstance(types[i]));  
            if (f) {  
               f->Text = types[i]->ToString();  
               f->MdiParent = this;  
               f->Show();  
            }  
         }  
      }  
   }  
};  
  
int main() {  
   Assembly^ a = Assembly::LoadFrom("plugin_application.exe");  
   Application::Run(gcnew PluggableForm(a));  
}  
```  
  
## <a name="example"></a>Esempio  
 Il codice seguente definisce tre classi derivate da <xref:System.Windows.Forms.Form>. Quando il nome del nome dell'assembly risultante viene passato al file eseguibile nell'elenco precedente, ognuna di queste tre classi verrà individuato e creata un'istanza, nonostante il fatto che sono stati tutti sconosciuti all'applicazione host in fase di compilazione.  
  
```  
// plugin_assembly.cpp  
// compile with: /clr /LD  
#using <system.dll>  
#using <system.drawing.dll>  
#using <system.windows.forms.dll>  
  
using namespace System;  
using namespace System::Windows::Forms;  
using namespace System::Reflection;  
using namespace System::Drawing;  
  
public ref class BlueForm : public Form {  
public:  
   BlueForm() {  
      BackColor = Color::Blue;  
   }  
};  
  
public ref class CircleForm : public Form {  
protected:  
   virtual void OnPaint(PaintEventArgs^ args) override {  
      args->Graphics->FillEllipse(Brushes::Green, ClientRectangle);  
   }  
};  
  
public ref class StarburstForm : public Form {  
public:  
   StarburstForm(){  
      BackColor = Color::Black;  
   }  
protected:  
   virtual void OnPaint(PaintEventArgs^ args) override {  
      Pen^ p = gcnew Pen(Color::Red, 2);  
      Random^ r = gcnew Random( );  
      Int32 w = ClientSize.Width;  
      Int32 h = ClientSize.Height;  
      for (int i=0; i<100; i++) {  
         float x1 = w / 2;  
         float y1 = h / 2;  
         float x2 = r->Next(w);  
         float y2 = r->Next(h);  
         args->Graphics->DrawLine(p, x1, y1, x2, y2);  
      }  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)