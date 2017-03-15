---
title: "Procedura: implementare un&#39;architettura plug-in tramite reflection (C++/CLI) | Microsoft Docs"
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
  - "plug-in [C++]"
  - "Reflection [C++], plug-in"
ms.assetid: 4f31e42b-78d1-48b9-8fdc-f28c75e8e77e
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: implementare un&#39;architettura plug-in tramite reflection (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Negli esempi di codice riportati di seguito viene illustrato come utilizzare la reflection per implementare una semplice architettura "plug\-in".  Il primo elenco corrisponde all'applicazione e il secondo al plug\-in.  L'applicazione è costituita da un form a più documenti in cui vengono inseriti automaticamente i dati utilizzando le eventuali classi basate su form trovate nella DLL plug\-in fornita come argomento della riga di comando.  
  
 L'applicazione tenta di caricare l'assembly fornito utilizzando il metodo <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName>.  Se l'operazione riesce, i tipi all'interno dell'assembly vengono enumerati utilizzando il metodo <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=fullName>.  Viene quindi verificata la compatibilità di ciascun tipo utilizzando il metodo <xref:System.Type.IsAssignableFrom%2A?displayProperty=fullName>.  In questo esempio, affinché l'assembly fornito venga qualificato come plug\-in, è necessario che le classi trovate nell'assembly siano derivate dalla classe <xref:System.Windows.Forms.Form>.  
  
 Vengono quindi create istanze per le classi compatibili utilizzando il metodo <xref:System.Activator.CreateInstance%2A?displayProperty=fullName>, che accetta un oggetto <xref:System.Type> come argomento e restituisce un puntatore a una nuova istanza.  Ogni nuova istanza viene quindi associata al form e visualizzata.  
  
 Tenere presente che il metodo <xref:System.Reflection.Assembly.Load%2A> non accetta nomi di assembly con estensione di file.  Tuttavia, poiché la funzione Main nell'applicazione elimina le eventuali estensioni fornite, l'esempio di codice riportato di seguito funzionerà in entrambi i casi.  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene definita l'applicazione che accetta i plug\-in.  Come primo argomento deve essere fornito il nome dell'assembly.  Quest'ultimo deve contenere almeno un tipo derivato <xref:System.Windows.Forms.Form> pubblico.  
  
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
  
## Esempio  
 Nell'esempio di codice riportato di seguito vengono definite tre classi derivate da <xref:System.Windows.Forms.Form>.  Quando il nome dell'assembly risultante viene passato all'eseguibile nel listato precedente, ognuna di queste tre classi verrà rilevata e verrà creata un'istanza, nonostante che tali classi non fossero note all'applicazione host in fase di compilazione.  
  
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
  
## Vedere anche  
 [Reflection](../dotnet/reflection-cpp-cli.md)